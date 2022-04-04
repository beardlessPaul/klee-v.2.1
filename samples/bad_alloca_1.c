#include "klee/klee.h"

/*-----------------------------------------------------------------------------

This sample is expected to throw bad alloca exception.

-----------------------------------------------------------------------------*/

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;

typedef struct tag_foo_confetti_s {
    uint32_t ul_foo_enable;
    uint32_t ul_foo_ratts;
    uint32_t ul_max_usable_num;
} foo_confetti_s;

typedef struct tag_foo_unusual_s {
    uint32_t ul_num;
} foo_unusual_s;

void check_null(void *ul_ptr)
{
    if ((ul_ptr) == NULL) {
        exit(-1);
    }
}

void check_mod(int32_t some_mod)
{
    if ((some_mod) >= 0XBAAD) {
        exit(-1);
    }
}

void check_too(uint32_t too)
{
    if ((0 != (too)) && (1 != (too))) {
        exit(-1);
    }
}

uint8_t cnt_res_idx(uint32_t some_mod, uint8_t ucl)
{
    return (uint8_t)((uint32_t)(some_mod)*2 + (ucl));
}

uint32_t cnt_rat_perk(uint32_t ul_rat, uint32_t *p_perk)
{
    uint32_t v_rat;
    check_null(p_perk);
    v_rat = ul_rat;
    *p_perk = (v_rat / 100) * 0xF;
    if (*p_perk < 0xF) {
        *p_perk = 0xF;
    }
    return 0x01;
}

uint32_t alloha_foo(uint32_t some_num, uint8_t some_id, int32_t some_mod, uint32_t perk, uint32_t confetti_ratts,
    uint16_t *foo_alloha, uint8_t *some_status, uint8_t alloha_flag, uint8_t perk_poli, uint32_t **foo_num_list,
    foo_confetti_s ***foo_confetti_list, foo_unusual_s ***foo_unusual_list)
{
    uint32_t rat_perk;
    uint32_t foo_idx = 0;
    uint32_t remain_ratts = confetti_ratts;
    uint32_t ratts_perk = 0;
    uint32_t foo_num;
    uint8_t uc_res_idx;
    foo_confetti_s *pst_foo_confetti = NULL;
    foo_unusual_s *pst_foo_unusual = NULL;
    uint32_t foo_res;

    check_mod(some_mod);
    check_too(perk);
    check_null(foo_alloha);
    check_null(some_status);

    uc_res_idx = cnt_res_idx(some_mod, perk);
    foo_num = foo_num_list[some_id][uc_res_idx];
    pst_foo_confetti = foo_confetti_list[some_id][uc_res_idx];
    pst_foo_unusual = foo_unusual_list[some_id][uc_res_idx];

    rat_perk = cnt_rat_perk(remain_ratts, &ratts_perk);
    if (rat_perk != 0x01) {
        exit(-1);
    }

    if (rat_perk > pst_foo_confetti[foo_idx].ul_foo_ratts) {
        rat_perk = pst_foo_confetti[foo_idx].ul_foo_ratts;
    }

    if (alloha_flag == 1) {
        if ((perk_poli == 1) && (remain_ratts > 0xFF)) {
            remain_ratts = remain_ratts + ratts_perk;
        } else if (perk_poli == 2) {
        } else if (remain_ratts > 0xFF * 3 / 2) {
            remain_ratts = remain_ratts + ratts_perk;
            ratts_perk = ratts_perk * 2;
        }
        if (remain_ratts < ratts_perk) {
            remain_ratts = ratts_perk;
        }
    } else {
        if (remain_ratts < 0xFF) {
            remain_ratts = 0xFF;
        }
    }

    memset(foo_alloha, 0, sizeof(uint16_t) * foo_num);

    foo_idx = 0;
    while ((foo_idx < foo_num) && (remain_ratts >= ratts_perk)) {
        foo_res = pst_foo_confetti[foo_idx].ul_max_usable_num;
        while ((pst_foo_confetti[foo_idx].ul_foo_ratts <= remain_ratts) && (foo_res >= 1)) {
            foo_alloha[foo_idx]++;
            remain_ratts -= pst_foo_confetti[foo_idx].ul_foo_ratts;
            foo_res--;

            if (remain_ratts < rat_perk) {
                break;
            }
        }
        foo_idx++;
    }

    *some_status = 0x01;
    if (remain_ratts >= ratts_perk) {
        *some_status = 0xFF;
    } else {
        for (foo_idx = 0; foo_idx < foo_num; ++foo_idx) {
            if (alloha_flag == 1) {
                if ((pst_foo_unusual[foo_idx].ul_num < (uint32_t)foo_alloha[foo_idx]) ||
                    ((foo_alloha[foo_idx] > 0) && (pst_foo_confetti[foo_idx].ul_foo_enable == 0))) {
                    *some_status = 0x02;
                    break;
                }
            } else {
                if (pst_foo_unusual[foo_idx].ul_num < (uint32_t)foo_alloha[foo_idx]) {
                    *some_status = 0x02;
                    break;
                }
            }
        }
    }

    if (*some_status == 0xFF) {
        return (uint32_t)((perk == 0xF) ? 0xFF : 0xF);
    }

    return 0x01;
}

int main()
{
    // setup for some_num {
    unsigned int some_num;
    klee_make_symbolic(&some_num, sizeof(some_num), "some_num");
    // }

    // setup for some_id {
    unsigned char some_id;
    klee_make_symbolic(&some_id, sizeof(some_id), "some_id");
    // }

    // setup for some_mod {
    int some_mod;
    klee_make_symbolic(&some_mod, sizeof(some_mod), "some_mod");
    // }

    // setup for perk {
    unsigned int perk;
    klee_make_symbolic(&perk, sizeof(perk), "perk");
    // }

    // setup for confetti_ratts {
    unsigned int confetti_ratts;
    klee_make_symbolic(&confetti_ratts, sizeof(confetti_ratts), "confetti_ratts");
    // }

    // setup for foo_alloha {
    unsigned short *foo_alloha;
    foo_alloha = malloc(sizeof(unsigned short));
    unsigned short foo_alloha_0;
    klee_make_symbolic(&foo_alloha_0, sizeof(foo_alloha_0), "foo_alloha[0]");
    foo_alloha[0] = foo_alloha_0;
    // }

    // setup for some_status {
    unsigned char *some_status;
    some_status = malloc(sizeof(unsigned char));
    unsigned char some_status_0;
    klee_make_symbolic(&some_status_0, sizeof(some_status_0), "some_status[0]");
    some_status[0] = some_status_0;
    // }

    // setup for alloha_flag {
    unsigned char alloha_flag;
    klee_make_symbolic(&alloha_flag, sizeof(alloha_flag), "alloha_flag");
    // }

    // setup for perk_poli {
    unsigned char perk_poli;
    klee_make_symbolic(&perk_poli, sizeof(perk_poli), "perk_poli");
    // }

    // setup for foo_num_list {
    unsigned int **foo_num_list;
    foo_num_list = malloc(sizeof(unsigned int *));
    foo_num_list[0] = malloc(sizeof(unsigned int));
    unsigned int foo_num_list_0_0;
    klee_make_symbolic(&foo_num_list_0_0, sizeof(foo_num_list_0_0), "foo_num_list[0][0]");
    foo_num_list[0][0] = foo_num_list_0_0;
    // }

    // setup for foo_confetti_list {
    struct tag_foo_confetti_s ***foo_confetti_list;
    foo_confetti_list = malloc(sizeof(struct tag_foo_confetti_s **));
    foo_confetti_list[0] = malloc(sizeof(struct tag_foo_confetti_s *));
    foo_confetti_list[0][0] = malloc(sizeof(struct tag_foo_confetti_s));
    unsigned int foo_confetti_list_0_0_0_ul_foo_enable;
    klee_make_symbolic(&foo_confetti_list_0_0_0_ul_foo_enable,
        sizeof(foo_confetti_list_0_0_0_ul_foo_enable),
        "foo_confetti_list[0][0][0].ul_foo_enable");
    foo_confetti_list[0][0][0].ul_foo_enable = foo_confetti_list_0_0_0_ul_foo_enable;
    unsigned int foo_confetti_list_0_0_0_ul_foo_ratts;
    klee_make_symbolic(&foo_confetti_list_0_0_0_ul_foo_ratts,
        sizeof(foo_confetti_list_0_0_0_ul_foo_ratts),
        "foo_confetti_list[0][0][0].ul_foo_ratts");
    foo_confetti_list[0][0][0].ul_foo_ratts = foo_confetti_list_0_0_0_ul_foo_ratts;
    unsigned int foo_confetti_list_0_0_0_ul_max_usable_num;
    klee_make_symbolic(&foo_confetti_list_0_0_0_ul_max_usable_num,
        sizeof(foo_confetti_list_0_0_0_ul_max_usable_num),
        "foo_confetti_list[0][0][0].ul_max_usable_num");
    foo_confetti_list[0][0][0].ul_max_usable_num = foo_confetti_list_0_0_0_ul_max_usable_num;
    // }

    // setup for foo_unusual_list {
    struct tag_foo_unusual_s ***foo_unusual_list;
    foo_unusual_list = malloc(sizeof(struct tag_foo_unusual_s **));
    foo_unusual_list[0] = malloc(sizeof(struct tag_foo_unusual_s *));
    foo_unusual_list[0][0] = malloc(sizeof(struct tag_foo_unusual_s));
    unsigned int foo_unusual_list_0_0_0_ul_num;
    klee_make_symbolic(
        &foo_unusual_list_0_0_0_ul_num, sizeof(foo_unusual_list_0_0_0_ul_num), "foo_unusual_list[0][0][0].ul_num");
    foo_unusual_list[0][0][0].ul_num = foo_unusual_list_0_0_0_ul_num;
    // }

    unsigned int res;
    res = alloha_foo(some_num,
        some_id,
        some_mod,
        perk,
        confetti_ratts,
        foo_alloha,
        some_status,
        alloha_flag,
        perk_poli,
        foo_num_list,
        foo_confetti_list,
        foo_unusual_list);
    unsigned int RET;
    klee_make_symbolic(&RET, sizeof(RET), "$RET");
    klee_assume(RET == res);
    return 0;
}
