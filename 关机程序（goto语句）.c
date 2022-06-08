#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	char input[20] = { 0 };
//	//shutdown -s -t 60 = 60秒后关机
//	//shutdown -a 停止关机
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("\n请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp 
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//不用goto语句版
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("\n请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp 
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}