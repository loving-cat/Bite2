#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void* e3, const void* e4)
//{
//	return (((struct Stu*)e3)->age - ((struct Stu*)e4)->age);
//}
////测试qsort排序结构体数据
//void test3() 
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",55},{"wangwu",40} };
//		//按照名字比较
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//}
//int main()
//{
//	test3();
//	return 0;
//}

//冒泡算法
//void bublle_srot(int arr[], int sz)
//{
//	int i = 0;
//	//一趟
//	for ( i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for ( i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bublle_srot2(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	//一趟
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* A, const void* B)
//{
//	return  *(int*)A - *(int*)B;
//}
//void test()
//{
//	int arr[] = { 2,1,3,4,9,5,6,8,0,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr,sz);
//}
//int main()
//{
//	test();
//	test2();
//	return 0;
//}