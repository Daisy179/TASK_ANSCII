/*
	Name:  Panth
	DOC:   7/12/2024
	Purpose:ch 4-9
*/
#include<stdio.h>
 
int main()
{
	int i,n,sum=0,rem;
	 
	printf("Enter a number: ");
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
		rem=i%10;
		sum+=rem;
		i=i/10;
	}
	printf("Sum of digits: %d",sum);
	 
}