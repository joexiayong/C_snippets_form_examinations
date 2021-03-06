/******************************************************************************

问题 1011: [编程入门]最大公约数与最小公倍数

题目描述
输入两个正整数m和n，求其最大公约数和最小公倍数。
输入
两个整数
输出
最大公约数，最小公倍数
样例输入

5 7

样例输出

1 35

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a > b ? b : a; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d\n", i);
            printf("%d", a * b / i);
            break;
        }
    }

    return 0;
}
/*
#include<stdio.h>
int main()
{
    int m,n,gbs,gys;
    m=5;
    n=10;
    for(gbs=m;gbs%n!=0;gbs=gbs+m);
    gys=m*n/gbs;
    printf("gbs=%d\ngys=%d\n",gbs,gys);
    return 0;
}
*/
