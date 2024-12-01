#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1;n>=i;i++){
        for(int j=1;n-i>=j;j++) printf("  ");

        for(int k=1;i>=k;k++) printf("%d ",k);

        if(i>1){
            int a=i-1;
            for(int w=1;i-1>=w;w++){
                printf("%d ",a);
                a=a-1;}}
            printf("\n");
    }
    return 0;
}