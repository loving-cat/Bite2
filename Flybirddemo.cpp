#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>

int main()
{
	printf("hello world\n");
	initgraph(800, 600); // 创建窗口
	int a =1;			 //存放整数
	IMAGE img;			 //存放图片 -->定义变量
	loadimage(&img, "D:BiteC.CPP/Flybirddemo/Flybirddemo/Res/background.bmp",800,600);
	putimage(0, 0, &img);


	while (1);
	closegraph();		 //关闭窗口
	return 0;
}