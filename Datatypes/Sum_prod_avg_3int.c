/* 7.	Write a C program that accepts 3 integers from the user 
and calculate the sum  ,Product  average of these  3 integers  */
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three integers: ");
	scanf("%d%d%d",&x,&y,&z);
	
	printf("\nSum of the Three integers is: %d.",x+y+z);
	printf("\nProduct of the Three integers is: %d. ",x*y*z);
	printf("\nSum of the Three integers is: %0.2f",(float)(x+y+z)/3);
	return 0;
	
}
