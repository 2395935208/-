#include <stdio.h>
int main()
{
int sum=0,a,b,c;
	printf("请输入语文，数学，英语成绩");
		scanf("%d,%d,%d",&a,&b,&c);
		sum=a+b+c;
		printf("语文数学英语的平均成绩为%d\n",sum/3);
	return 0;
}