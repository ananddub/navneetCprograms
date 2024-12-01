#include<stdio.h>
int prime(int x){
    int a = 1;
    for(int i=2;i<x;i++){
        if(x%i==0){
            a = 0;
            break;
        }
    }
    if(a==1) return x;
    else return a;

}
int main(){
    int n;
    printf("Enter your positive number : ");
    scanf("%d",&n);

    if(n<=0) printf("Only positive number is allowed");
    else{
        printf("Prime factors of %d are : ",n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(i==prime(i)){
                printf("%d ",i);
            }
        }
    }
    }
    return 0;
}