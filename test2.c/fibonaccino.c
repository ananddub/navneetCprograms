#include<stdio.h>
int main(){

    int n,e=1;
    printf("enter the number : ");
    scanf("%d",&n);
    
    int a=0,b=1,c,d=2;
    while(n>=d){
        c=a+b;
        a=b;
        b=c;
        d++;
    }
    if(n==1) {printf("your fibonacco number is %d",e);}
    else {printf("your fibonacco number is %d",c);}
    return 0;
}
