/*
	Name:  Panth
	DOC:19 nov
	Purpose: ch 2 13
*/
#include<stdio.h>
 
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float d;
	
	printf("\nDistance of x1 and y1 : ");
	scanf("%d %d",&x1,&y1);
	printf("\nDistance of x2 and y2 : ");
	scanf("%d %d",&x2,&y2);
	d=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("\nDistance: %.2f",sqrt(d));
	
}