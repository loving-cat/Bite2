#include<stdlib.h>
#include<stdio.h>
int main02() {
	//cmd命令 calc 计算器 notepad 记事本 mspaint 画图板
	//system("osk");
	//system可以打开一个外部的应用程序 如果带路径 需要使用\\或者/
	int value;
	//value = system("C:/Program Files (x86)/Netease/CloudMusic/cloudmusic.exe");
	value = system("calc");
	printf("%d\n",value);
	//%d 是一个占位符，表示输出一个整型数据
	return 0;
}