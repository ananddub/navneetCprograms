#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;n-i>=j;j++){
            printf("  ");
        }
        for(int k=1;2*i-1>=k;k++){
            char ch = (char)k+64;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}