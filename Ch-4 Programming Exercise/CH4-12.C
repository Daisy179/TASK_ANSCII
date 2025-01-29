/*
	Name:  Panth
	DOC:   7/12/24
	Purpose:4-12
*/
#include<stdio.h>
 
int main()
{
	float a,b,c,d;
	 
	printf("Enter three values: ");
	scanf("%f %f %f",&a,&b,&c);
	printf("Addition is : %.0f",a+b+c);
	printf("\nAverage is : %.2f",(a+b+c)/3);
	d=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\nMax is : %.2f",d);
	d=(a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("\nMin is : %.2f",d);
	 
}