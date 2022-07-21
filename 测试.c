#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char arr[] = "i love you";
//	printf("%d", sizeof(arr));
//	return 0;
//}
//int main()\
//{
//    char a = 10;
//    char arr1[a] = {};
//    printf("%d", a); //
//    return 0;
//}
//#define a 30;
//int main()
//{
//    int b = 20;
//    int sum = a + b;
//    printf("%d", sum);
//    return 0;
//}
//enum Sex
//{
//	//下面是enum Sex 类型变量的可能取值，这三个可能取值就是枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;//性别
//	printf("%d\n", s);
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//int main()
//{
//    int a = 1;
//    int b = ++a;
//    printf("%d", b);
//    return 0;
//}
//int main()
//{
//    int a = 5;
//    int b = 4;
//    int n = a > b ? a : b;//当a>b为真时
//    printf("%d",n);
//    return 0;
//}
//
//int main()
//{
//    int i = 0;
//    while (scanf("%c", &i) != EOF)
//    {
//        if (i >= 'A' && i <= 'Z')
//            printf("%c\n", (i + 32));
//    }
//    getchar();
//    return 0;

//宿舍开门单片机STM32代码
//while (1)
//{
//	delay_ms(10);
//	while (!(USART_RX_STA & 0x8000))
//	{
//		continue;
//	}
//	USART_RX_STA = 0;
//	if ((USART_RX_BUF[0] != '4')
//		|| (USART_RX_BUF[1] != '5')
//		|| (USART_RX_BUF[2] != '1'))
//	{
//		continue;
//	}
//	LED = !LED;
//	DOOR = 1;
//	USART_RX_STA = 0;
//	delay_ms(1000);
//	delay_ms(1000);
//	DOOR = 0;
//}

//算100-200的素数
//int main()
//{
//	int i,j = 0;
//	for ( i = 100; i < 200; i++)
//	{
//		for ( j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("素数是=%d\n", i);
//		}
//
//	}
//	return 0;
//}

//求10个数最大值
//int main()
//{
//	int max = 0;
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for ( i = 0; i < 10; i++)
//	{	
//		if(max<arr[i])
//		{
//			max = arr[i];
//			i++;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int n = 0;
//	scanf("%d", &n);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		
//		if (arr[mid] > n)
//		{
//			right = arr[mid] - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = arr[mid] + 1;
//		}
//		else{
//			printf("找到了，它的下标=%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("不在数组里");
//	}
//	return 0;
//}