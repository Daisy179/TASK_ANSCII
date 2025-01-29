#include<stdio.h>

int main(){
    float a,b;
    printf("Enter two values for division: ");
    scanf("%d %d",&a,&b);
    if(b==0){
        printf("Not Valid Calculation! Bye bye");
    }
    else{
        printf("Division is : %f",a/b);
    }
    return 0;
}