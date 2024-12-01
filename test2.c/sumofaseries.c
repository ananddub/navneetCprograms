#include<stdio.h>
int main(){
    
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

   // printf("%d",n);

    int sum=0,a=1;
    while(n>=a){
        if(a%2==0)sum=sum-a;
        else sum=sum+a;
        a=a+1;
    }
        
    printf("%d",sum);

    return 0;
}