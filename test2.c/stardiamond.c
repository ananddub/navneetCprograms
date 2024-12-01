#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    if(n%2==0) printf("Only odds numbers are valid");
    else{
    for(int i=1;n>=i;i++){
        if(i<=n/2+1){
            for(int j=1;(n/2)-i+1>=j;j++) printf("  ");
            for(int z=1;2*i-1>=z;z++) printf("* ");
        }
       else{
            for(int k=1;i-(n/2)-1>=k;k++) printf("  ");
            for(int w=1;2*(n-i)+1>=w;w++) printf("* ");
       }
        printf("\n");
      }
    }
    return 0;
}