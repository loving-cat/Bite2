#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int i = 0;
//	int o = 0;
//	int j = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 2 == 0) {
//			printf("偶数=%d\n",i);
//			o=o+i;//=   o=o+i
//		}
//		else {
//			printf("奇数=%d\n",i);
//			j += i;
//		}
//		
//	}
//	printf("偶数和=%d 奇数和=%d\n", o,j);
//	return 0;
//}
#include<stdio.h>
//int main() {
//	char pingyin[10][5] = { "ling","yi","er","san","si","wu","liu",
//						 "qi","ba","jiu" };
//	char num[100];
//	long long int index[100];
//	long long int sum = 0;
//	//将index数组的值设置为-1 
//	for (int i = 0; i < 100; i++) {
//		index[i] = -1;
//	}
//	printf("%d",index);
//	scanf("%s", num);
//	int j = 0;
//	//将输入的数字(字符)相加得sum 
//	while (num[j] != '\0') {
//		sum += num[j] - '0';
//		j++;
//	}
//	//将sum分解789  7,8,9 放入index[i]中 
//	int k = 0;
//	while (sum != 0) {
//		index[k] = sum % 10;
//		sum /= 10;
//		k++;
//	}
//	//输出 
//	for (int i = 99; i >= 0; i--) {
//		if (index[i] != -1) {
//			//输出最后一个是无空格 
//			if (i == 0) {
//				printf("%s", pingyin[index[i]]);
//			}
//			else {
//				printf("%s ", pingyin[index[i]]);
//			}
//		}
//	}
//
//	return 0;
//}
