/******************************************************************************


题目描述

一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 编程序找出N之内的所有完数，并按下面格式输出其因子
输入

N
输出

? its factors are ? ? ?
样例输入

1000

样例输出

6 its factors are 1 2 3 
28 its factors are 1 2 4 7 14 
496 its factors are 1 2 4 8 16 31 62 124 248 



*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=6;i<=N;i++){
        int sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d its factors are",i);
            for(int j=1;j<i;j++){
            if(i%j==0){
                printf(" %d",j);
            }
        }
        printf("\n");
        }
        
    }
    return 0;
}
