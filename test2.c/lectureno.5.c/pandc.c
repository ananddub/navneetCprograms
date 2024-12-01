#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){

    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int r;
    printf("Enter r : ");
    scanf("%d",&r);

    int ans = factorial(n)/(factorial(r)*factorial(n-r));

    printf("Your answer is %d",ans);

    return 0;
}