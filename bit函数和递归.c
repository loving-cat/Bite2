#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ա��֪��
// //https://stackoverflow.com/
//�ݹ�
//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
// ÿ�εݹ����֮��Խ��Խ�ӽ����������������
//��򵥵ĵݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//��ϰ1.����һ������ֵ���޷��ţ�������˳Ѱ��ӡ����ÿһλ�����磺���룺1234.��� 1 2 3 4.
//���÷���ֵ��ʱ����void
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}


//void cEr(int m)
//{
//	if (m > 9)
//	{
//		cEr(m / 10);
//	}
//	printf("%d ", m % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	cEr(num);
//	return 0;
//}

//��ϰ2. ��д��������������ʱ���������ַ����ĳ��ȡ�
#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�ķ���
//�Ѵ��»�С
//my_strlen("bit);
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
//3
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] ="bit";
	//int len = strlen(str);
	//printf("%d", len);
	//ģ��ʵ����һ��strlen����
	int len = my_strlen(arr);//arr �����飬���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
	printf("len = %d\n", len);
	return 0;
}