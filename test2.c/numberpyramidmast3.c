#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int g = 0;
    for(int l=1;l<=n;l++){
        g++;
        printf("%d ",g);
        
    }
    for(int h=1;h<n;h++){
        g = g-1;
        printf("%d ",g);
    }
    printf("\n");

    int nsp = 1;
    int non=n-1;

    for(int i=1;n>=i;i++){
        int a=1;
        for(int j=1;j<=non;j++){
            printf("%d ",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        for(int z=1;z<=non;z++){
            a--;
            printf("%d ",a);
        }
        printf("\n");
        nsp+=2;
        non--;
    }
    return 0;
}