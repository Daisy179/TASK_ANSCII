/*
	Name:  Panth
	DOC:   23 nov
	Purpose:ch3-6
*/
#include<stdio.h>
 
#define pi 3.14
int main()
{
	float r;
	float ans;

	 
	printf("\nEnter radius: ");
	scanf("%f",&r);
	ans=pi*r*r;
	printf("\nArea of circle: %.2f",ans);
	 
}