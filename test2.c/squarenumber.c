#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    
    int a,b,min;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(n>i) a=i;
            else a=2*n-i;

            if(n>j) b=j;
            else b=2*n-j;

            if(a>b) min=b;
            else min=a;

            printf("%d ",n-min+1);
        }
        printf("\n");
    }


    return 0;
}