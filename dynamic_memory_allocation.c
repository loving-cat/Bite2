#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int num = 10;//向内存申请了4个字节
//	int arr[10];//向内存申请了40个字节
//	return 0;
//}
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//int main()
//{
//	//int arr[10]; //向内存申请了40个字节
//	//动态内存分配是在堆区申请的，需要释放回收
//	int* p = (int *)malloc(INT_MAX);
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//	//释放
//	free(p);
//	p = NULL;
// ptr = NULL;
//	return 0;
//}

// calloc
//int main()
//{
//	//40字节-10个整型
//	//malloc(40);
//	int* p = (int*)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		perror("colloc");
//		return 1;
//	}
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//int test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//..使用
//	if (1)
//		return 2;
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
////内存泄露
//
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	int num = 10;
//}
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	//使用
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//			
//	}
//	//增加空间
//	int * ptr = (int *)realloc(p, 80);
//	//当realloc开辟失败的时候，返回的是NULL
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//
//	}
//	for ( i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	//
//	
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

