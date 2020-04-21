#include <stdio.h>
#include <math.h>

void main()
{
	float a,b,c,s,area;
	printf("input  三角形三边\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形面积为:%7.2f\n",area);

}