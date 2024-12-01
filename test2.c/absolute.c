#include<stdio.h>
int main(){

int n;

    printf("enter a number : -3");
    scanf("%d",&n);

    if(n<0){
        n = n * -1;
        }
    printf("the absoulte value is : %d",n);

    return 0;
}