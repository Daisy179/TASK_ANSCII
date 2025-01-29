/*
	Name:  Panth
	DOC:   7/12/24
	Purpose:ch 4-11
*/
#include<stdio.h>
 
int main()
{
	int m,n;
	 
	printf("Enter value of m: ");
	scanf("%d",&m);
	printf("Enter value of n: ");
	scanf("%d",&n);
	if(m%n==0){
		printf("%d is multiple of %d",m,n);
	}else{
		printf("%d is not multiple of %d",m,n);
	}
	 
}