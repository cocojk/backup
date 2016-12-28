
#include <stdio.h>

#define offsetof(TYPE,MEMBER) ((size_t)&((TYPE *)0)->MEMBER)

typedef struct data {
    int a;
    int b;
    char c;
    char d;
} Data;

int main (void)
{
    Data d;
    printf("%d",((Data*)1)->c);
    int c =offsetof(Data,b);
}
