#include <stdio.h>

    char str1[21] = "ABC";
    char* str2 = "CDE";
int main (void)
{
    
    printf("%s\n",str1);
    printf("%s\n",str2);
    
    
    char* hack = &(str1[0]);
    hack = str2;
    printf("%s\n",str1);
    printf("%s\n",str2);
}
