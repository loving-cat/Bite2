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

int main()
{
    int i = 0;
    while (scanf("%c", &i) != EOF)
    {
        if (i >= 'A' && i <= 'Z')
            printf("%c\n", (i + 32));
    }
    getchar();
    return 0;
}