#include <stdio.h>

struct hlist_head {
    struct hlist_node *first;
};

struct hlist_node {
    struct hlist_node *next,**pprev;
    int num;
};

static inline void headInit (struct hlist_head * h)
{
    h->first = NULL;
}

static inline void nodeInit (struct hlist_node *h,int num)
{
    h->next = NULL;
    h->pprev = NULL;
    h->num = num;
}

static inline hlist_add_head (struct hlist_node *n, struct hlist_head *h)
{
    struct hlist_node * first = h->first;
    n->next = first;
    if (first)
        first->pprev = &n->next;
    h->first = n;
    n->pprev = &h->first;
}

int main(void)
{
    struct hlist_head head;
    headInit(&head);
    struct hlist_node n1;
    nodeInit (&n1,1);
    struct hlist_node n2;
    nodeInit (&n2,2);

    hlist_add_head (&n1,&head);
    printf("%d\n",head.first->num);
    hlist_add_head (&n2,&head);
    printf("%d\n",head.first->num);


}

