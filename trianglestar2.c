#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1;n>=i;i++){
        for(int j=1;1-i+n>=j;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}