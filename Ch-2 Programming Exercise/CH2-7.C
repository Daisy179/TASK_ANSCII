/*
	Name:  Panth
	DOC:19 nov
	Purpose:ch 2 7
*/
#include<stdio.h>
 
int add(int,int);
int sub(int,int);
int main()
{
	int a,b;
	
	printf("\nEnter a and b: ");
	scanf("%d %d",&a,&b);
	printf("\n%d + %d = %d",a,b,add(a,b));
	printf("\n%d - %d = %d",a,b,sub(a,b));
	
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}