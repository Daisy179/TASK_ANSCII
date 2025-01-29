#include<stdio.h>

int  main(){
    int a,b,c,d;

    printf("Enter 4 values: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    printf("\n(a+b)*(c/d)= %d",(a+b)*(c/d));
    printf("\n(a+b)*c/d= %d",(a+b)*c/d);
    printf("\na+(b*c)/d= %d",a+(b*c)/d);
    return 0;
}