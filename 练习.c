#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//�˷��ھ���
int main() {
	int i = 0;
	int j = 0;
	//ȷ����ӡ����
	for ( i = 1; i <=9; i++)
	{
		//��ӡһ��
		int j = 1;
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 0; i <=100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	print("%lf\n", sum);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 10 == 9) {
//			count++;
//		}
//		if(i/10 == 9) {
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for ( i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", &password);
//		if (strcmp(password,"123456") == 0) //==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("�������\n");
//		
//
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}
//int main() {
//	//welcome to bit!!!!!!
//	//####################
//	//w###################
//	//w##################!
//	//we################!!
//	//wel##############!!!
//	//...
//	//welcome to bit!!!!!!
//	//
//	//char arr[]="abc";
//	//[a b c \0]
//	//0 1  2  3
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//err
//	int right = strlen(arr1)-1;
//	while(left<=right){
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	//��Ϣһ��
//	Sleep(1000);
//	system("cls");//ִ��ϵͳ�����һ������ -cls �����Ļ
//	left++;
//	right--;
//	}
//	return 0;
//}
//���ּ���
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//	while (left<=right)
//	{
//	int mid = (left + right) / 2;
//	if (arr[mid] > k) {
//		right = mid - 1;
//	}
//	else if (arr[mid] < k) {
//		left = mid + 1;
//	}
//	else {
//		printf("�ҵ��ˣ��±���:%d\n", mid);
//		break;
//	}
//}
//	if (left > right) {
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//		
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main() {
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//
//	printf("sum = %d\n", sum);
//	return 0;
//}
//�Ż�����
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum =0;
//	//1+2+6=9
//	for ( n = 1; n <=3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++) {
//			ret = ret * i;
//		}
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}


//int main() {
//	int i = 0;
//	for ( i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0) {
//			printf("3�ı���:%d\n", i);
//		}
//	}
//	return 0; 
//}