#include<stdio.h>
int main(){
    
    int n;
    printf("Enter th number : ");
    scanf("%d",&n);
    
    for(int i=1;n>=i;i++){
        for(int j=1;n-i>=j;j++) printf("  ");
        for(int j=1;n>=j;j++) printf("* ");
        for(int k=1;i>=k;k++) printf("  ");
    
    printf("\n");
    }

    return 0;
}