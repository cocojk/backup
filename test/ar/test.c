#include <stdlib.h>
#include <stdio.h>

extern int externval;
int a = 10;
int b = 0;
int array[10];
const int img[5] = {0,1,2,3,4};
char* pData = "Hieonn";

main()
{
    externval++;
    static int c;
    static int d = 15;
    char label[100];
    char* pLabel;

    pLabel = (char*)malloc(sizeof(char)*200);

    free(pLabel);
}

