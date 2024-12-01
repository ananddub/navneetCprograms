#include<stdio.h>
int main(){

    int n,p,k=1;
    printf("enter your number : ");
    scanf("%d",&n);
    printf("enter the power of your nubmer : ");
    scanf("%d",&p);
    int a=n;

    while(p>k){
        a=a*n;
        k++;
    }
    printf("Value of %d to the power %d is %d",n,p,a);
    return 0;
}