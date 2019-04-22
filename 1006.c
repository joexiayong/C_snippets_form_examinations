/*

题目描述
编写一个程序，输入a、b、c三个值，输出其中最大值。
输入
一行数组，分别为a b c
输出
a b c其中最大的数
样例输入

10 20 30

样例输出

30



*/
int main()
{
    int num[3]={0};
    int i=0;
    for(i=0;i<3;i++){
    scanf("%d",&num[i]);
        if(i>0 && num[i]<num[i-1]){num[i]=num[i-1];}
    }
    printf("%d",num[i-1]);

    return 0;
}
