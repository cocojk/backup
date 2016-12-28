#include <stdio.h>
#include <stdlib.h>

static int a=10;
int b=0;
int array[10];
int const img[5] = {0,1,2,3,4};
char *pData = "Hieonn";

int main()
{
	static int c;
	static int d =15;
	char label[100];
	char* pLabel;

	pLabel= (char*)malloc(sizeof(char)*200);
	printf("a : %x\n",&a);
	printf("b : %x\n",&b);
	printf("array : %x\n",&array);
	printf("img : %x\n",&img);
	printf("pData : %x %x\n",&pData,pData);
	printf("c : %x\n",&c);
	printf("d : %x\n",&d);
	printf("label : %x\n",&label);
	printf("pLabal : %x\n",&pLabel);
	
	free(pLabel);
}



