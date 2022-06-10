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

void Swap1(int x , int y)//void 表示没有返回值
{ 
	int tmp = 0;		//不能完成任务
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
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作  通过pa存着的地址找到里面的内容
//	printf("%d", a);
//	return 0;
//}



