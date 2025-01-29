/*
	Name:  Panth
	DOC:	23 nov
	Purpose: 3-1
*/
#include<stdio.h>
 
int main()
{
	int i,n;
	float sum;
	 
	printf("\nEnter a number : ");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=(1/(float)i);
	}
	printf("\nAnswer is : %.2f",sum);
	 
}