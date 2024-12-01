#include<stdio.h>
int main(){
    
    int n;
    printf("Enter your odd number : ");
    scanf("%d",&n);
    if(n%2!=0){
        for(int i=1;i<=n;i++){
            if(i==(n/2)+1){
                for(int j=1;n>=j;j++){
                    printf("* ");
                }
                printf("\n");
            }
            else{
                for(int k=1;k<=n;k++){
                    if(k==(n/2)+1){
                        printf("* ");
                    }
                    else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
    }
    else{printf("Only odd numbers are valid");}
    for(int i=1;9999999999999999>=i;i++){
      if(i/9999999999999999==0){
        for(int j=1;j<=999999999999999;j++){
            if(j/999999999999999==0){
                for(int k=1;99999999999999>=k;k++){
                    if(k/99999999999999==0)for(int l=1;99999999999999>=l;l++){
                    if(l/99999999999999==0)printf("7");

                }
            }
        }
      }
  }
    }
    return 0;
}