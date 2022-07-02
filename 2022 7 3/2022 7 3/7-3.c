#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//数组--一组相同类型的元素的集合
//int xx[10] = { 1,2,3,4,5,6,7,8,9,10 }；
//char xx[5] = { 'a','b','c' };    //(不完全初始化，剩余的默认为0)
//数组是有下标来表示的 第一个下标为0
int main()
{
	/*int shuzu[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)   /////while 用的是大括号 {}
	{
		printf("%d\n", shuzu[i]);
		i++;
	}*/
	//printf("%d\n", sizeof 10);
	////printf("%d\n", sizeof(int));
	//char str[20] = {0,1,2,3,4,5,6,7,8,9};///后面缺少的都是自动用0补齐
	//char arr[5] = "123";///字符 1 2 3分别对应 十进制的 49 50 51 后面缺少的两个被0补足


	/*int a = strlen(str);
	int b = sizeof(str);
	printf("%d\n", a);
	printf("%d\n", b);*/


	//int i = 0;
	//while (i<5)
	//{ 
	//	printf("%d\n", arr[i]);
	//	i++;
 //    }

//	int abc[10] = { 1,2,3,};
//	printf("%d\n", sizeof(abc));
//	/////（单位是字节）结果是40 也就是说 abc这个数组 由int引导 
//	//每一个元素都是整型 一个整型是4字节
//	//那么十个元素就是 40字节
//
//	printf("%d\n", sizeof(abc[0]));
//	/// 接来下是计算一个数组的元素个数的方法p18
//	int geshu = sizeof(abc) / sizeof( abc[0]);
//	printf("%d\n", geshu);//结果是10 


	int a = 0;
	printf("%d\n", ~a);

			
			
			return 0 ;

}