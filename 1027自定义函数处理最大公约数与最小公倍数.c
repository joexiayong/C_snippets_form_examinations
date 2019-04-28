/*



问题 1027: [编程入门]自定义函数处理最大公约数与最小公倍数

时间限制: 1Sec 内存限制: 128MB 提交: 3647 解决: 2733
题目描述
写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入。
输入
两个数
输出
最大公约数 最小公倍数
样例输入

6 15

样例输出

3 30




*/
#include<stdio.h>
int comax(int a,int b){
	int c = a;
	for(int i =0;c%b!=0;c+=a);
	return c;
}
int comix(int a,int b){
	int c=comax(a,b);
	return a*b/c;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d",comix(a,b),comax(a,b));
	return 0;
	
}
