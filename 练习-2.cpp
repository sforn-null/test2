#include<stdio.h>
int main()
{
	int i = -20;
	//1000000000000000000000000010100
	//00010100
	//11101011
	//11101100
	unsigned int j = 10;
	//00001010
	//00001010
	//00001010
	//0000000000000000000000000001010
	printf("%d\n", i + j);
	return 0;
}