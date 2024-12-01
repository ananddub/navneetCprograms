#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1;n>=i;i++){
        for(int j=1;n-i+1>=j;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}