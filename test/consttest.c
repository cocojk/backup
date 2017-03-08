
#include <stdio.h>

const int constInt = 0;
static int staticInt;
const int* p = &constInt;

int main (void)
{
    printf("%d\n",constInt);
    *(int*)p = 10;
    printf("%d\n",constInt);
}
