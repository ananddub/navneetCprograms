#include<stdio.h>
int main(){

    int n;
    int a = 1;
    printf("enter number of times : ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        printf("%d ",a);
        a = a*2;
    }
    return 0;
}