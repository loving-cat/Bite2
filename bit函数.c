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

void Swap1(int x , int y)//void ��ʾû�з���ֵ
{ 
	int tmp = 0;		//�����������
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* pa,int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	//int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	//Swap1(a,b);
	Swap2(&a, &b);
	/*tmp = a;
	a = b;
	b = tmp;*/
	printf("a=%d b=%d\n", a, b);
	return 0;
}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���  ͨ��pa���ŵĵ�ַ�ҵ����������
//	printf("%d", a);
//	return 0;
//}



