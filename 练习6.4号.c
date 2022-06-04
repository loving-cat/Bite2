#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//打印100-200的素数
int main() {
	int i = 0;
	int count = 0;
	//sqrt - 开平方的数学库函数
	for ( i = 100; i <= 200; i++)
	{	
		//判断i是否为素数
		//素数判断的规则
		//1.试除法
		//求13是否素数
		//首先产生2->i-1
		int j = 0;
		//优化
		for ( j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			count++;
			printf("%d\n", i);
		}
		/*for ( j = 2; j < i; j++)
		{
			if (i % j == 0) {
				break;
			}
		}
		if (j == i) {
			count++;
			printf("%d是素数\n", i);
		}*/
	}
	printf("\n count = %d\n", count);
	return 0;
}
 

//打印闰年
//int main() {
//	int year = 0;
//	int count = 0;
//	
//	for (year = 1000; year < 2000; year++) {
//	//	//判断year是否为闰年
//	//	//1.能被4整除 并且不能被100整除为闰年
//	//	//2.能被400整除是闰年
//	//方法①
//	//	if (year % 4 == 0 && year % 100 != 0) {
//	//		printf("%d\n", year);
//	//		count++;
//	//	}
//	//	else if(year%400==0)
//	//	{
//	//		printf("%d\n", year);
//	//		count++;
//	//	}
//	//方法②
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}
//取最大公约数  辗转相除法
//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//  scanf("%d%d",&m,&n);
//	while (r=m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	 }
//	printf("%d\n", n);
//	return 0;
//}
// 3的倍数
//int main() {
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0) {
//			printf("3的倍数:%d\n", i);
//		}
//	}
//	return 0;
//}
//三数比大小排序
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);;//2 1 3
//	//算法实现
//	//a 最大值
//	//b 次之
//	//c 最小
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}