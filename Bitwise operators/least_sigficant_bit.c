/* 4.Program to input any number from user and 
check whether the Least Significant Bit (LSB) of the given
number is set (1) or not (0).*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("LSB is set to %d",num&1);
	return 0;
}
