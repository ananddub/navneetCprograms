#include<stdio.h>
int fibonacci(int x){
    if(x==1 || x==2) return 1;
    int y = fibonacci(x-1) + fibonacci(x-2);
    return y;

}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
   int ans = fibonacci(n);
   printf("%d th fibonacci number is %d ",n,ans);

   return 0;

}