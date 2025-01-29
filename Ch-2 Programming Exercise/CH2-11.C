/*
	Name:  Panth
	DOC:19 nov
	Purpose:ch 2 11
*/
#include<stdio.h>
 
#include<math.h>
int main()
{
	int a,b,c;
	float s,area,x;
	
	printf("Enter 3 sides of triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2.0;
	x=(s)*(s-a)*(s-b)*(s-c);
	printf("%0.2f",sqrt(x));
	
}