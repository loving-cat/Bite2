#define _CRT_SECURE_NO_WARNINGS 1
//需要引入的文件
#include<stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);;//2 1 3
	//算法实现
	//a 最大值
	//b 次之
	//c 最小
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
//如解答错误，注意检查错误信息提示，对比预期输出和实际输出之间的差异
//三目运算
//int main07() {
//	int a, b, c, max;
//	scanf("%d,%d,%d", &a, &b, &c);
//	max = a > b ? a : b;
//	max = c > max ? c : max;
//	printf("max=%d\n", max);
//	return 0;
//	// your code
//}
