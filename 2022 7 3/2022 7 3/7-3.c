#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����--һ����ͬ���͵�Ԫ�صļ���
//int xx[10] = { 1,2,3,4,5,6,7,8,9,10 }��
//char xx[5] = { 'a','b','c' };    //(����ȫ��ʼ����ʣ���Ĭ��Ϊ0)
//���������±�����ʾ�� ��һ���±�Ϊ0
int main()
{
	/*int shuzu[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)   /////while �õ��Ǵ����� {}
	{
		printf("%d\n", shuzu[i]);
		i++;
	}*/
	//printf("%d\n", sizeof 10);
	////printf("%d\n", sizeof(int));
	//char str[20] = {0,1,2,3,4,5,6,7,8,9};///����ȱ�ٵĶ����Զ���0����
	//char arr[5] = "123";///�ַ� 1 2 3�ֱ��Ӧ ʮ���Ƶ� 49 50 51 ����ȱ�ٵ�������0����


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
//	/////����λ���ֽڣ������40 Ҳ����˵ abc������� ��int���� 
//	//ÿһ��Ԫ�ض������� һ��������4�ֽ�
//	//��ôʮ��Ԫ�ؾ��� 40�ֽ�
//
//	printf("%d\n", sizeof(abc[0]));
//	/// �������Ǽ���һ�������Ԫ�ظ����ķ���p18
//	int geshu = sizeof(abc) / sizeof( abc[0]);
//	printf("%d\n", geshu);//�����10 


	int a = 0;
	printf("%d\n", ~a);

			
			
			return 0 ;

}