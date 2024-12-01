#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a;

    for(int i=1;n>=i;i++){
        if(i%2==0) a = 0;
        else a = 1;
        for(int j=1;i>=j;j++){
            printf("%d ",a);
            if(a==0) a = 1;
            else a = 0;
        }
        printf("\n");
    }
    return 0;
}