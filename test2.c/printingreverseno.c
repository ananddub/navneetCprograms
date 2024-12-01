#include<stdio.h>
int main(){

    int n;
    printf("enter your number : ");
    scanf("%d",&n);

    int b,c=0;
    while(n!=0){
        b=n%10;
        n=n/10;
        c=10*c+b;
        
    }
    printf("your reverse number is %d",c);
    return 0;
}