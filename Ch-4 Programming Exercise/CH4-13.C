#include<stdio.h>

int main(){
    int n,c;
    float extra,fare=1.25,total=250.0;
    printf("Enter number of calls: ");
    scanf("%d",&n);
    if(n>100){
        c=n-100;
        extra=fare*c;
        total+=extra;
    }
    printf("Total fare is: %0.2f",total);
    return 0;
}