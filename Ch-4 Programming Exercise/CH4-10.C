/*
	Name:  Panth
	DOC:   7/12/24
	Purpose:ch 4-10
*/
#include<stdio.h>
 
int main()
{
	int a,b,c,d;
	 
	printf("Enter 3 values: ");
	scanf("%d %d %d",&a,&b,&c);
	d=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Max is : %d",d);
	 
}