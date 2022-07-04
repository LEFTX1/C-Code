#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int a = 0;
	//printf("%d\n", ~a);

	//		

	//int a = 10;
	//int b = ++a;  //前置++ a会改变
	////此时都是11 （先++ 后使用）
	//int a = 10;
	//int b = a++;
	////后置++ 先使用 再++
	//所以b=10 a=11



	//int a = (int)3.14;//强制类型转化
	//printf("%d\n", a);


	//&取地址操作符
	int a = 10;
	int b = 20;
	printf("%p\n",&a);//%P打印地址
	int * pa = &a;//c语言中pa叫做指针变量
	//* 说明pa是指针变量
	//int 说明pa执行对象是int类型
	char ch = 'w';
	char * pc = &ch;
	//char 说明 执行对象是字符 



	return 0;
}