/*
	Name:  Panth
	DOC:   23 nov
	Purpose:3-12
*/
#include<stdio.h>
 
int main()
{
	int money,m;
	 
	printf("\nEnter amount of money: ");
	scanf("%d",&money);
	if(money>=2000)
	{
		m=money/2000;
		printf("\n 2000 notes: %d",m);
		money-=(m*2000);
	}
	if(money>=500)
	{
		m=money/500;
		printf("\n 500 notes: %d",m);
		money-=(m*500);
	}
	if(money>=200)
	{
		m=money/200;
		printf("\n 200 notes: %d",m);
		money-=(m*200);
	}
	if(money>=100)
	{
		m=money/100;
		printf("\n 100 notes: %d",m);
		money-=(m*100);
	}
	if(money>=50)
	{
		m=money/50;
		printf("\n 50 notes: %d",m);
		money-=(m*50);
	}
	if(money>=20)
	{
		m=money/20;
		printf("\n 20 notes: %d",m);
		money-=(m*20);
	}
	if(money>=10)
	{
		m=money/10;
		printf("\n 10 notes: %d",m);
		money-=(m*10);
	}
	printf("\nChange: %d",money);
	 
}