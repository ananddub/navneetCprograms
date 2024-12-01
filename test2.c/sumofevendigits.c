#include<stdio.h>
int main(){

    int n;
    printf("enter your number : ");
    scanf("%d",&n);

    int a,b=0;

    while(n!=0){
        a=n%10;
        n=n/10;
        if(a%2==0){
            b=b+a;
        }
    }
    printf("Sum of your even digit is %d",b);
    return 0;
}