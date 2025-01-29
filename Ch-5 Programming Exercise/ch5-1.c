#include<stdio.h>
#include<string.h>

int main(){
    char c[20];
    printf("Enter a string: ");
    scanf(" %s",&c);
    for(int i=0;i<4;i++){
        printf("%c",c[i]);
    }
    printf(" ");
    for(int i=4;i<strlen(c);i++){
        printf("%c",c[i]);
    }
    printf("\n");

    for(int i=0;i<4;i++){
        printf("%c",c[i]);
    }
    printf("\n");
    for(int i=4;i<strlen(c);i++){
        printf("%c",c[i]);
    }
    printf("\n");

    printf("%c.%c.",c[0],c[4]);
    // printf("%s",c);
}