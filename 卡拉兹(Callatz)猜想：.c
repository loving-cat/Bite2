#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//错误示范
//int main() {
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    scanf("%d", &n);
//        for (i = 0; i != 1; i--) {
//            if (n % 2 == 0) {
//                n = n / 2;
//                j++;
//            }
//            else {
//                n = (3 * n + 1) / 2;
//                j++;
//            }
//                if (n == 1) {
//                    break;
//                }
//        }
//        printf("%d", j);
//    return 0;
//}
//正确示范
//int main()
//{
//    int n;
//    int count = 0;
//    scanf("%d", &n);
//    while (n != 1)
//    {
//        if (n % 2 == 0)
//        {
//            n = n / 2;
//            count++;
//        }
//        else
//        {
//            n = (3 * n + 1) / 2;
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//自己尝试
int main() {
    int n = 0;
    int step = 0;
    scanf("%d", &n);
    while (n != 1) {
        if (n % 2 == 0)
        {
            n = n / 2;
            step++;
        }
        else {
            n = (3 * n + 1) / 2;
            step++;
        }
    }
    printf("%d", step);
    return 0;
}