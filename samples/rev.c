#include "klee/klee.h"

/*-----------------------------------------------------------------------------

This sample illustrates some potential challenges for recursion-depth reduction 
algorithm presented on Feb 2th. The final post-condition gets true only after 
a list is fully processed. Thus, if we simply stop unfolding recursive calls
we may encounter some problems.

Note: if we limit the max stack size, say by --max-stack-frames=20, we get 
"Maximum stack size reached" warning, but nevertheless produced ktest 
provides almost 100% coverage (as concrete execution doesn't stop recursion).

-----------------------------------------------------------------------------*/

struct node
{
    struct node *link;
    int val;
};

// https://stackoverflow.com/questions/14080758/reversing-a-linkedlist-recursively-in-c
struct node *rev(struct node *first)
{
    if (first == NULL)
        return NULL; // list does not exist.
    if (first->link == NULL)
        return first;                     // list with only one node.
    struct node *rest = rev(first->link); // recursive call on rest.
    first->link->link = first;            // make first; link to the last node in the reversed rest.
    first->link = NULL;                   // since first is the new last, make its link NULL.
    return rest;                          // rest now points to the head of the reversed list.
}

int main()
{
    // setup for first {
    struct node *first;

    first = malloc(sizeof(struct node));
    first[0].link = malloc(sizeof(struct node));
    first[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = malloc(sizeof(struct node));
    first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link = NULL;
    // }

    struct node *last = first[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link[0].link;
    struct node *res = NULL;

    // Pre-condition
    klee_assert(res == NULL);
    klee_assert(res != first);
    klee_assert(res != last);
    klee_assert(last[0].link == NULL);
    klee_assert(first[0].link != NULL);

    // Call
    res = rev(first);

    // Post-condition
    klee_assert(res != NULL);
    klee_assert(res != first);
    klee_assert(res == last);
    klee_assert(first[0].link == NULL);

    return 0;
}
