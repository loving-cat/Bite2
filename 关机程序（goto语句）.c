#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	char input[20] = { 0 };
//	//shutdown -s -t 60 = 60���ػ�
//	//shutdown -a ֹͣ�ػ�
//	//system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("\n��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp 
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//����goto����
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("\n��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp 
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}