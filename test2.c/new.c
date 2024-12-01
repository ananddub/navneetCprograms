#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
     if (n>99 && n<1000){
        printf("its a three digit number");
     }
     else{
        printf("its not a three digit a number");
     }
     return 0;
}