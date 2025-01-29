#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter three sides of triangle : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && a==c && b==c){
        printf("Triangle is not Isoceles");
    }
    else if(a==b || a==c || b==c){
        printf("Triangle is Isoceles");
    }
    else{
        printf("Triangle is not Isoceles");
    }
    return 0;
}