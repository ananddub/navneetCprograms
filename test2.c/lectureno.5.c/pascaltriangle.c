#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n;
    printf("Enter the number of row : ");
    scanf("%d",&n);

    for(int i=0;i<=n-1;i++){
        for(int j=1;j<=n-1-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            int cell = combination(i,k);
            printf("%d ",cell);
        }
        printf("\n");
    }
    return 0;
}