#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;n>=i;i++){
        for(int j=1;j<=n-i;j++)
        printf("  ");
        for(int k=1;i>=k;k++){
        printf("* ");}
        printf("\n");
    }
    return 0;
}