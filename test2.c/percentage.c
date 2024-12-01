#include<stdio.h>
int main(){

    int n;
    printf("enter a percentage : ");
    scanf("%d",&n);

    if(n>80)
        printf("A grade");
    else if(n>60)
        printf("B grade");
    else if(n>50)
        printf("C; grade");
    else if(n>40)
        printf("D grade");
    else
        printf("E grade");
        
return 0;
}