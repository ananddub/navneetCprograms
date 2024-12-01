#include<stdio.h>
int main(){
    int n;
   printf("enter a number : ");
   scanf("%d",&n);
   int c=0;
    while(n!=0){
        n=n/10;
        c=c+1;
    }
    printf("the number of digits are %d",c);
    return 0;
}