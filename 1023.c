/*


问题 1023: [编程入门]选择排序

时间限制: 1Sec 内存限制: 128MB 提交: 6943 解决: 3667
题目描述
用选择法对10个整数从小到大排序。
输入
无
输出
排序好的10个整数
样例输入

4 85  3 234 45 345 345 122 30 12

样例输出

3
4
12
30
45
85
122
234
345
345



*/

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a[10], i, j, temp;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    return 0;
}
