#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a = 1;

    for(int i=1;n>=i;i++){
        for(int j=1;i>=j;j++){
            printf("%d ",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}