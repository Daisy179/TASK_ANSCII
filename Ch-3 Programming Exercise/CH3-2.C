/*
	Name:  Panth
	DOC:   23 nov
	Purpose:ch 3-2
*/
#include<stdio.h>
 
int main()
{
	float price_sugar,price_rice;
	 
	printf("\nEnter price for sugar: ");
	scanf("%f",&price_sugar);
	printf("\nEnter price for rice: ");
	scanf("%f",&price_rice);
	 
	printf("***List of Items***");
	printf("\nItem\tPrice");
	printf("\nRice \t%.2f\nSugar\t%.2f",price_rice,price_sugar);
	 
}