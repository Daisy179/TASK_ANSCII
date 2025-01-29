/*
	Name:  Panth
	DOC:   23 nov
	Purpose:4-5
*/
#include<stdio.h>
 
int main()
{
	float n;
	int a;
	 
	printf("\nEnter a number: ");
	scanf("%f",&n);
	a=(int)n;
	printf("\nSmallest number bigger than real number: %d",a+1);
	printf("\nReal number: %f",n);
	printf("\nLargest number smaller than real number: %d",a);
	 
}