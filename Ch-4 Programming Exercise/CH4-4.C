/*
	Name:  Panth
	DOC:   23 nov
	Purpose:4-4
*/
#include<stdio.h>
 
int main()
{
	float depr,pur,sal;
	int year;
	 
	printf("\nEnter year: ");
	scanf("%d",&year);
	printf("\nEnter depreciated value: ");
	scanf("%f",&depr);
	printf("Enter purchase price: ");
	scanf("%f",&pur);
	sal=pur-(depr*((float)year));
	printf("\nSalvage value: %.2f",sal);

	 
}