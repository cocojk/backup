#include <stdio.h>

int main(void)
{
	char buffer [100]="abcd";
	char* pointer = buffer;
	pointer[0]='b';
	printf("%s\n",buffer);
	return 0;
}
