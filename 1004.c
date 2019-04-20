#include <stdio.h>
/* https://www.dotcpp.com/oj/problem1004.html
题目描述
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？

输入
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。

输出
对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。

样例输入
2
4
5
0
样例输出
2
4
6 */
int cow(int num)
{
    // printf("num= %d\n",num);
    int mouther = 1, yearling = 0, tow_years = 0, three_years = 0;
    num--;
    for (; num > 0; num--)
    {
        mouther += three_years;
        three_years = tow_years;
        tow_years = yearling;
        yearling = mouther;
    }
    int totle = mouther + yearling + tow_years + three_years;
    // printf("totle = %d\n",totle);
    return totle;
}
int main()
{
    int flag = 1;
    int a[100] = {0}, i = 0;
    while (flag)
    {
        scanf("%d", &flag);
        a[i] = cow(flag);
        i++;
        // printf("flag = %d\n",flag);
        // printf("a[%d]=%d\n",i,a[i]);
    }
    for (int j = 0; j < i - 1; j++)
    {
        printf("%d\n", a[j]);
    }
}
