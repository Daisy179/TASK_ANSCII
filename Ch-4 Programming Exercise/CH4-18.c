#include<stdio.h>

int main(){
    float a,b,c,x;
    printf("Enter values of a,b & c: ");
    scanf("%f %f %f",&a,&b,&c);
    x=(a-b)/(3+(c*2)-1);
    printf("X =  %f",x);
    return 0;
}