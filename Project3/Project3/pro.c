#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "adc";
	char arr2[] = { 'a','b','c','\0'};
	int len = strlen("abc");
	int ren = strlen((arr1));
	int yibai = 100;
	printf("%d\n", strlen(arr2));
	printf("100\n");
	printf("%d\n", yibai);
	printf("%c\n", '\32');
	return 0;
}
