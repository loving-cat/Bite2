#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//www.cpluscplus.com
// MSDN����
// en.cppreference.com  en��zn Ϊ����
// �⺯��
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	//strlen
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	//				 bit\0###  -- \0=�ַ���������־
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy -string copy -�ַ�������
//	//strlen -string length -�ַ��������й�
//	return 0;
//}

//memset
//memory - �ڴ�  set - ����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	//		��ַ�������õ�ֵ�������õ��ַ���
//	printf("%s\n", arr);
//	//��������***** world
//	return 0;
//}

//�Զ��庯��
//���������
//ret_type fun_name(para1,*)
//{
//	statement;//�����
//}
//ret_type ��������
//fun_name ������
//para1 ��������

//���� дһ�����������ҳ����������еĽϴ�ֵ

//���庯��
//int get_max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	//��Ŀ  return(x>y)?(x):(y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max = get_max(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}
//��ʵ�δ����βε�ʱ��
//�β���ʵʱʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
// 
//void Swap1(int x , int y)//void ��ʾû�з���ֵ
//{ 
//	int tmp = 0;		//�����������
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa,int* pb)//(int* pa,int* pb) �β�
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;//ʵ��
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a,b);//��ֵ����
//	Swap2(&a, &b);//��ַ����
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���  ͨ��pa���ŵĵ�ַ�ҵ����������
//	printf("%d", a);
//	return 0;
//}

//�β�-��ʽ����-��ʽ�ϵĲ���



//��ϰ 1.дһ�����������ж�һ�����ǲ�������
//����������1��������������0
//����ֻ�ܱ� 1�ͱ�������
//int is_prime(int n)
//{
//	//2->n-1
//	int j = 0;
//	for ( j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//��ӡ100-2100֮�������
//	int i = 0;
//	for ( i = 100; i <=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//��ϰ 2.дһ�������ж�һ���ǲ�������
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	//1000-2000�������
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//��ϰ 3.дһ��������ʵ��һ��������������Ķ��β��ҡ�
//					������arr��һ��ָ�� ָ����ܽ��ܵ�ַ
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨ʵ��
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right) 
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��ˣ�������������±꣬�Ҳ��������±�
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//						���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//��ϰ 4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1.
//int Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	//���ú�����ÿ�ε���num+1;
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
//�����ͺ���֮������л��������һ��

//Ƕ�׵���
//void new_line()
//{
//	printf("hello\n");
//}
//void three_line() {
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//��ʽ����
//��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���

//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2 ��ʽ����
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//			1     ��ӡ��2���ַ�		2						43
//	return 0;
//}

//�����������Ͷ���

//��������
//int Add(int x, int y);
//
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
////�����Ķ���
//int Add(int x, int y)  
//{
//	int z = x + y;
//	return z;
//}
