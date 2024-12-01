#include<stdio.h>
int factorial(int x){
    int a = 1;
    for(int i=2;i<=x;i++){
        a = a*i;
    }
    return a;
}
int main(){
    int n;
    printf("\nEnter the nth number : ");
    scanf("%d",&n);
    printf("\n");

    for(int i=0;i<=n;i++){
       int ans = factorial(i);
       printf("factorial of %d is %d\n",i,ans);
    }
    printf("\n");
    return 0;
}