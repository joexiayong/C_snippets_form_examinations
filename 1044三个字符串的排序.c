#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
问题 1044: [编程入门]三个字符串的排序

时间限制: 1Sec 内存限制: 128MB 提交: 3789 解决: 1789
题目描述
输入三个字符串，按由小到大的顺序输出
输入
3行字符串
输出
按照从小到大输出成3行
样例输入

cde
afg
abc

样例输出

abc
afg
cde
 * */
int main()
{
    char str[3][128];
    int *sp = str;
    int i = 0, j = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%s", str[i]);
    }
    for (i = 1; i < 3; i++)
    {
        for (j = 0; j < 3 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                char *tmp = malloc(sizeof(char) * 128);
                strcpy(tmp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], tmp);
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}