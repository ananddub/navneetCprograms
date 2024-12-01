#include<stdio.h>
int power(int x,int y){
    if(y==1) return x;
    x=x*power(x,y-1);
    return x;
}
int main(){
    int a,b;
    printf("Enter the nubmer : ");
    scanf("%d",&a);
    printf("Enter the power of the number : ");
    scanf("%d",&b);
    int ans = power(a,b);
    printf("Value of %d raised to the power %d is %d",a,b,ans);

    return 0;
}