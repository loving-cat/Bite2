#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//����Ĵ�����һ����ͬ����Ԫ�صļ��ϣ�����Ĵ�����ʽ:
//type_t arr_name [const_n];
//type_t ��ָ�����Ԫ������
//const_n��һ���������ʽ������ָ������Ĵ�С
//int main()
//{
//	//int arr[10] = {1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5]={'a',98};
//	//char arr2[5] = "ab";//char�������������ʼ��
//	char arr4[] = "abcdef";//����ָ����Сʱ�������ʼ��
//	printf("%d\n", sizeof(arr4));
//	//sizeof ����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ��-char 7*1 =7
//	printf("%d\n", strlen(arr4));
//	//strlen ���ַ����ĳ��� - '\0'֮ǰ���ַ�����
//	//[a b c d e f \0]
//	//6
//
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}
//1.strlen �� sizeof û��ʲô����
//2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶� - �⺯��-ʹ����Ҫ����ͷ�ļ�
//3.sizeof ������������飬���͵Ĵ�С-��λ���ֽ� - ������
//

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	int arr3[] = { 1,2,3,4,5 };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//
//}

//int main()
//{
//	//char arr[] = "abcdef";//[a] [b] [c] [d] [e] [f] [/0]
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for ( i = 0; i < strlen(arr); i++)
//	//{
//	//	printf("%c\n", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//��ά����
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//char ch[5][6];
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	//char ch[5][6];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n ",i,j,& arr[i][j]);
		}
	}

	return 0;
}