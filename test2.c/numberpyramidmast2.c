#include<stdio.h>
int main(){
    
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    for(int i=1;i<=2*n-1;i++){
        printf("%d",i);
    }
    printf("\n");

    int nsp=1;
    int non=n-1;

    for(int j=1;j<=n-1;j++){
        for(int k=1;k<=non;k++){
            printf("%d",k);
            }
        for(int z=1;z<=nsp;z++){
            printf(" ");
        }
        for(int l=1;l<=non;l++){
            int m=2*n-non-1+l;
            printf("%d",m);
        }
        nsp+=2;
        non--;
        printf("\n");
    }
    return 0;
}