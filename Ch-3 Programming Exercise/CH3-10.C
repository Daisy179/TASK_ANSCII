/*
	Name:  Panth
	DOC:   23 nov
	Purpose:3-10
*/
#include<stdio.h>
 
int main()
{
	int day,year=0,week=0;
	 
	printf("\nEnter number of days: ");
	scanf("%d",&day);
	if(day>=365)
	{
		year=day/365;
		printf("\nYears: %d",year);
		day-=(year*365);
	}
	if(day>=7)
	{
		week=day/7;
		printf("\nWeeks: %d",week);
		day-=(week*7);
	}
	printf("\nDays: %d",day);
	 
}