#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter base of parallelogram: ");
	scanf("%f",&base);
	
	printf("enter height of the parallelogram: ");
	scanf("%f",&height);
	area=(base*height);
	printf("AOP: %f\n",area);
	return 0;
}
