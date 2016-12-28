#include <stdio.h>

int main(void)
{
    int i=100000;

    while(i)
    {
        if(__builtin_expect(i,1))
        {
            int j;
            for(j=0;j<10000;j++);
        }
        else 
        {

        }

        i--;
    }
}
