#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	//int input = 0;
	//printf("会（1)不会（0）");
	//	scanf("%d", &input);
	//	if (input == 1)
	//	{
	//		printf("nb");
	//	}
	//	else
	//	{
	//		printf("gg");
	//	}
	/*int line = 0;
	while (line < 30000)
	{
		printf("写代码:%d\n",line);
		line++;
	}
	if (line == 30000);*/
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = ADD(num1, num2);
	printf("%d\n", sum);
	return 0;
}