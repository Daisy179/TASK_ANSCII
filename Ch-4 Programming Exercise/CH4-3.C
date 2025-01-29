/*
	Name:  Panth
	DOC:   23 nov
	Purpose:4-3
*/
#include<stdio.h>
 
int main()
{
	int n,i,count;
	
	printf("\nEnter number: ");
	scanf("%d",n);
	count=0;
	while(n>0)
	{
		n/=10;
		count+=1;
	}
	printf("%d",count);
	
}