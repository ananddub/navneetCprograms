#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%2==0){printf("even");}

    if(n%2!=0){printf("odd");}

    return 0;
}