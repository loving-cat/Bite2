#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//数组的创建是一组相同类型元素的集合，数组的创建方式:
//type_t arr_name [const_n];
//type_t 是指数组的元素类型
//const_n是一个常量表达式，用来指定数组的大小
//int main()
//{
//	//int arr[10] = {1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	//char arr2[5]={'a',98};
//	//char arr2[5] = "ab";//char数组可以这样初始化
//	char arr4[] = "abcdef";//当不指定大小时，必须初始化
//	printf("%d\n", sizeof(arr4));
//	//sizeof 计算arr4所占空间的大小
//	//7个元素-char 7*1 =7
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串的长度 - '\0'之前的字符个数
//	//[a b c d e f \0]
//	//6
//
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}
//1.strlen 和 sizeof 没有什么关联
//2.strlen 是求字符串长度的-只能针对字符串求长度 - 库函数-使用需要引用头文件
//3.sizeof 计算变量，数组，类型的大小-单位是字节 - 操作符
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

//二维数组
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