#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    for(int i=1;n>=i;i++){
        for(int j=1;i>=j;j++){
            char ch = (char)j+64;
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
                printf("%c ",ch);
            }
        }
        printf("\n");
    }
    return 0;
}