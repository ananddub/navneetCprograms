#include<stdio.h>
//int factorial(int x){
  //  int fact = 1;
    //for(int i=2;x>=i;i++){
      //  fact = fact*i;
    //}
    //return fact;
//}
//int combination(int n,int r){
  //  int comb = factorial(n)/(factorial(r)*factorial(n-r));
    //return comb;
//}
int main(){
    int n;
    printf("Enter the number of row : ");
    scanf("%d",&n);

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            printf(" ");
        }
        int first = 1;
        for(int k=0;k<=i;k++){
            printf("%d ",first);
            first = first*(i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}