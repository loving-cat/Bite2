#include<stdlib.h>
#include<stdio.h>
int main02() {
	//cmd���� calc ������ notepad ���±� mspaint ��ͼ��
	//system("osk");
	//system���Դ�һ���ⲿ��Ӧ�ó��� �����·�� ��Ҫʹ��\\����/
	int value;
	//value = system("C:/Program Files (x86)/Netease/CloudMusic/cloudmusic.exe");
	value = system("calc");
	printf("%d\n",value);
	//%d ��һ��ռλ������ʾ���һ����������
	return 0;
}