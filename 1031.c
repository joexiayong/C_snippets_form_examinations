/******************************************************************************

题目描述
写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串。
输入
一行字符
输出
逆序后的字符串
样例输入

123456abcdef 

样例输出

fedcba654321

*******************************************************************************/

int main()
{
   char str[100];
   int j = 0;
   scanf("%s",str);
   for(int i=99;i>=0;i--){
       if(str[i] == '\0'){j=i-1;}
   }
   for(;j>=0;j--){
       printf("%c",str[j]);
   }
    return 0;
}