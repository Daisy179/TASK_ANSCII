#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sqrt : %.2f,\tSqr: %.2f",sqrt(n),pow(n,2));
    return 0;
}