#define _CRT_SECURE_NO_WARNINGS 1
//��Ҫ������ļ�
#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);;//2 1 3
//	//�㷨ʵ��
//	//a ���ֵ
//	//b ��֮
//	//c ��С
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
//�������ע���������Ϣ��ʾ���Ա�Ԥ�������ʵ�����֮��Ĳ���
//int main07() {
//	int a, b, c, max;
//	scanf("%d,%d,%d", &a, &b, &c);
//	max = a > b ? a : b;
//	max = c > max ? c : max;
//	printf("max=%d\n", max);
//	return 0;
//	// your code
//}