#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>

int main()
{
	printf("hello world\n");
	initgraph(800, 600); // ��������
	int a =1;			 //�������
	IMAGE img;			 //���ͼƬ -->�������
	loadimage(&img, "D:BiteC.CPP/Flybirddemo/Flybirddemo/Res/background.bmp",800,600);
	putimage(0, 0, &img);


	while (1);
	closegraph();		 //�رմ���
	return 0;
}