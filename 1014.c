问题 1014: [编程入门]阶乘求和
题目描述

求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
输入

n
输出

Sn的值
样例输入

5

样例输出

153

#include <stdio.h>
int xxx(int a){
    unsigned long int number=1;
    for(int i =1;i<=a;i++){
        number*=i;
    }
    return number;
}
int main()
{
    int num;
    scanf("%d",&num);
    unsigned long long a=0;
    for(int i=1;i<=num;i++){
        a += xxx(i);
    }
    
    printf("%d",a);

    return 0;
}
