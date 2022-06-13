#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//程序员的知乎
// //https://stackoverflow.com/
//递归
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
// 每次递归调用之后越来越接近的这个限制条件。
//最简单的递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//练习1.接受一个整型值（无符号），按照顺寻打印它的每一位。例如：输入：1234.输出 1 2 3 4.
//不用返回值的时候用void
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
//	//递归
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

//练习2. 编写函数不允许创建临时变量，求字符串的长度。
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
//递归的方法
//把大事化小
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
	//模拟实现了一个strlen函数
	int len = my_strlen(arr);//arr 是数组，数组传参，传过去的不是整个数组，而是首元素的地址
	printf("len = %d\n", len);
	return 0;
}