/* Program to check whether the entered character is alphabet or not
 using conditional operator*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	//((ch >=97 && ch <= 122 )||(ch >= 65 && ch<= 90))?printf("Alphabet"):printf("Not alphabet");
	((ch >='A' && ch <='Z')||(ch >= 'a' && ch<='z'))?printf("Alphabet"):printf("Not alphabet");
	return 0;

}

