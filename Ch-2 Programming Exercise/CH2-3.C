/*
	Name:  Panth
	DOC:19 nov
	Purpose:  ch 2 3
*/
#include<stdio.h>
 
int main()
{
	int x,i;
	
	printf("\nEnter a number for multiplication : ");
	scanf("%d",&x);
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",x,i,x*i);
	}
	
}