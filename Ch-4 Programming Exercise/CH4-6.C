/*
	Name:  Panth
	DOC:   23 nov
	Purpose:4-6
*/
#include<stdio.h>
 
int main()
{
	float u,a,t,d;
	 
	printf("\nEnter intial velocity: ");
	scanf("%f",&u);
	printf("\nEnter accelaration: ");
	scanf("%f",&a);
	printf("\nEnter time interval: ");
	scanf("%f",&t);
	d= (u*t) + (a*t*t)/2;
	printf("\nDistance %f is travelled in %f time interval",d,t);
	 
}