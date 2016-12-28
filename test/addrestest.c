#include <stdio.h>

static int staticglobal;
int global;

int main (void)
{
    int stack;
    static int staticlocal;

    printf("static global : %x\n",&staticglobal);
    printf("global : %x\n",&global);
    printf("stack : %x\n",&stack);
    printf("staticlocal : %x\n",&staticglobal);
    return 0;
}
