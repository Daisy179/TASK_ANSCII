/*
	Name:  Panth
	DOC:   23 nov
	Purpose:4-8
*/
#include<stdio.h>
 
#include<math.h>
int main()
{
	float f,c,l,r,i;
	 
	printf("\nEnter inductance and resisatnce: ");
	scanf("%f %f",&l,&r);
	c=0.01;
	for(i=0;i<10;i++)
	{
		f=(1/(l*c))-(r*r)/(4*c*c);
		printf("\n Frequency of %0.2f capacitance: %0.2f",c,f);
		c+=0.01;
	}
	 
}