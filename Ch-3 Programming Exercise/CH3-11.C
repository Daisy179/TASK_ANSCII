/*
	Name:  Panth
	DOC:   23 nov
	Purpose:3-11
*/
#include<stdio.h>
 
int main()
{
	float dis,petrol,mil;
	 
	printf("\nEnter distance travelled: ");
	scanf("%f",&dis);
	printf("\nEnter petrol used: ");
	scanf("%f",&petrol);
	mil=dis/petrol;
	printf("\nMileage: %.2f km/ltr",mil);
	 
}