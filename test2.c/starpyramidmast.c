#include<stdio.h>
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    for(int l=1;l<=2*n-1;l++){
         printf("* ");}
    printf("\n");
    int nst = n-1;
    int nsp = 1;
    for(int i=1;n-1>=i;i++){
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        for(int z=1;z<=nst;z++){
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
return 0;

    }
