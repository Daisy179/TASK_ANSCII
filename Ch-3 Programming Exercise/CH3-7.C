/*
	Name:  Panth
	DOC:   23 nov
	Purpose:3-7
*/
#include<stdio.h>
 
int main()
{
	int n,i;
	 
	printf("\nEnter a number for table: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",n,i,n*i);
	}
	 
}