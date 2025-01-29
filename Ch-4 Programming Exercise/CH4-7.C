/*
	Name:  Panth
	DOC:   23 nov
	Purpose:4-7
*/
#include<stdio.h>
 
#include<math.h>
int main()
{
	float eoq,tbo,drate,scost,hcost;
	 
	printf("\nEnter demand rate, supply cost and holding cost: ");
	scanf("%f %f %f",&drate,&scost,&hcost);
	eoq=2*drate*scost/hcost;
	tbo=2*scost/drate/hcost;
	printf("\nEOQ: %.3f \t TBO: %.3f",sqrt(eoq),sqrt(tbo));
	 
}