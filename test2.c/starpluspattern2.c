#include<stdio.h>
int main(){

    int n;
    printf("enter your odd number : ");
    scanf("%d",&n);

    if(n%2!=0){
       for(int i=1;n>=i;i++){
          for(int j=1;n>=j;j++){
            if(j==(n/2)+1 || i==(n/2)+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
          }
          printf("\n");
       }
       
    }
    else printf("Only odd numbers are valid");
    return 0;
}