#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//www.cpluscplus.com
// MSDN工具
// en.cppreference.com  en改zn 为中文
// 库函数
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
//	//				 bit\0###  -- \0=字符串结束标志
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy -string copy -字符串拷贝
//	//strlen -string length -字符串长度有关
//	return 0;
//}

//memset
//memory - 内存  set - 设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	//		地址，需设置的值，需设置的字符数
//	printf("%s\n", arr);
//	//输出结果：***** world
//	return 0;
//}

//自定义函数
//函数的组成
//ret_type fun_name(para1,*)
//{
//	statement;//语句项
//}
//ret_type 返回类型
//fun_name 函数名
//para1 函数参数

//例子 写一个函数可以找出两个整数中的较大值

//定义函数
//int get_max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	//三目  return(x>y)?(x):(y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}
//当实参传给形参的时候
//形参其实时实参的一份临时拷贝
//对形参的修改是不会改变实参的
// 
//void Swap1(int x , int y)//void 表示没有返回值
//{ 
//	int tmp = 0;		//不能完成任务
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa,int* pb)//(int* pa,int* pb) 形参
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;//实参
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a,b);//传值调用
//	Swap2(&a, &b);//传址调用
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作  通过pa存着的地址找到里面的内容
//	printf("%d", a);
//	return 0;
//}

//形参-形式参数-形式上的参数



//练习 1.写一个函数可以判断一个数是不是素数
//是素数返回1，不是素数返回0
//素数只能被 1和本身整除
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
//	//打印100-2100之间的素数
//	int i = 0;
//	for ( i = 100; i <=200; i++)
//	{
//		//判读i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//练习 2.写一个函数判断一年是不是闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	//1000-2000年的闰年
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//判断i是否为闰年
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//练习 3.写一个函数，实现一个整型有序数组的二次查找。
//					本质上arr是一个指针 指针才能接受地址
//int binary_search(int arr[], int k,int sz)
//{
//	//算法实现
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right) 
//	{
//		int mid = (left + right) / 2;//中间元素的下标
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
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了，返回这个数的下标，找不到返回下标
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//						传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//练习 4.写一个函数，每调用一次这个函数，就会将num的值增加1.
//int Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	//调用函数，每次调用num+1;
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}

//函数的嵌套调用和链式访问
//函数和函数之间可以有机的组合在一起

//嵌套调用
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

//链式访问
//把一个函数的返回值作为另外一个函数的参数

//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2 链式访问
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//			1     打印的2个字符		2						43
//	return 0;
//}

//函数的声明和定义

//函数声明
//int Add(int x, int y);
//
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
////函数的定义
//int Add(int x, int y)  
//{
//	int z = x + y;
//	return z;
//}
