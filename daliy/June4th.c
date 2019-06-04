/*


问题 1022: [编程入门]筛选N以内的素数

时间限制: 1Sec 内存限制: 128MB 提交: 5254 解决: 3504
题目描述
用简单素数筛选法求N以内的素数。
输入
N
输出
2～N的素数
样例输入

100

样例输出

2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97


*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=2;i<=n;i++){
        for(j=2;j<=i;j++){if(i%j==0)printf("%d\n",i);}

    }
    return 0;
}
#include <stdio.h>
#include<string.h>


int main()
{
    int j=0;
    char  *a[5]={"123","456","789","899","345"};
    int i=1;
    for(;i<5;i++){
        if(strcmp(a[j],a[i])<0){
            j=i;
        }
    }
    printf("%s",a[j]);
    return 0;
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    typedef struct linked_node{
        int a;
        struct linked_node *next;
    } node;
    node *head = (node*)malloc(sizeof(node));
    node *q= (node*)malloc(sizeof(node));
    node *r= (node*)malloc(sizeof(node));
    node *end = (node*)malloc(sizeof(node));
    head-> a=1;
    head->next=q;
    q-> a=2;
    q->next = r;
    r-> a=3;
    r->next=end;
    end-> a=4;
    end->next=NULL;
    head->next=q;

    printf("%d",q->a);



    return 0;
}
