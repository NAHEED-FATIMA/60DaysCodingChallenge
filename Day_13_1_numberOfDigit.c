#include<stdio.h>
int main()
{
	long number,temp;
	int count = 0;
	printf("enter an integer: ");
	scanf("%d",&number);
	temp = number;
	do
    {
    	temp /=10;
    	++count;
	}
	while(temp !=0);
    printf("number of digital in the number %d is: %d",number,count);
}
