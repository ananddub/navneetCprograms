#include<stdio.h>
int main(){
    int m,n;//m=coloumn n= rows
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of coloumns : ");
    scanf("%d",&m);

    for(int i=1;n>=i;i++){
        for(int j=1;m>=j;j++){
            if(i==1 || j==1 || j==m || i==n){
                printf("* ");
                }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}