#include<stdio.h>
int main(){
    
    float n;
    float a = 100;
    printf("enter the number : ");
    scanf("%f",&n);
    for(float i=1;i<=n;i++){
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}