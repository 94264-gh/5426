/***********************************
*该程序是一个判断是否为闰年的小程序*
***********************************/
#include <stdio.h>

void main()
{
	int year;
	printf("请输入年份: \n");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0)
	{
		printf("是闰年\n");
	}
	else if(year%4==0 && year%100==0 && year%400==0)
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
}