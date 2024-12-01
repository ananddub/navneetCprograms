#include<stdio.h>
int main(){

    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    
    if(a%5==0){
        if(a%3==0){
            printf("the number is divisible by 5 and 3");
        }
        else{
            printf("the number is divisible by 5 but not 3");
        }
    }
    if(a%3==0 && a%5!=0){
            printf("the number is divisible by 3 but not 5");
    }
    return 0;
}