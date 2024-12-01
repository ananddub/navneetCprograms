#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n%2==0){
        printf("Only odd numbers are allowed");
    }
    else{
        for(int i=1;n>=i;i++){
            for(int j=1;n>=j;j++){
                if(j==i || j==(n-i+1)){
                    printf("* ");
                }
                else{printf("  ");}
            }
            printf("\n");
        }
    }
    return 0;
}