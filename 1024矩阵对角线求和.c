/*
 * *
 *

问题 1024: [编程入门]矩阵对角线求和

时间限制: 1Sec 内存限制: 128MB 提交: 6068 解决: 3985
题目描述
求一个3×3矩阵对角线元素之和。
输入
矩阵
输出
主对角线 副对角线 元素和
样例输入

1 2 3
1 1 1
3 2 1

样例输出

3 7


 */


#include <stdio.h>
int main(){
    int num[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&num[i][j]);
        }
    }
    int corner=0;
    for(i=0;i<3;i++){
            corner+=num[i][i];


    }
    int incorner=0;
    for(i=0;i<3;i++){
            incorner+=num[i][2-i];


    }
    printf("%d %d",corner,incorner);
    return 0;
}