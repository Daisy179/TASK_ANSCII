/*
	Name:  Panth
	DOC:   23 nov
	Purpose:3-3
*/
#include<stdio.h>
#include <stdlib.h>
 
// #define size 5

int main()
{
	int a,p=0,n=0;
	 
	for(;;)
	{
		printf("Enter value of a: ");
		scanf("%d",&a);
		if(a==0)
		{
			printf("\nTotal positive numbers : %d",p);
			printf("\nTotal negative numbers : %d",n);
			 
			exit(0);
		}
		else if(a>0)
		{
			p++;
		}
		else
		{
			n++;
		}
	}
}