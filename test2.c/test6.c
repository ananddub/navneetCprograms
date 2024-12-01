#include<stdio.h>
int main(){

    int a,b,c,d;
    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);

    c = b/a;

    d = b-(c*a);

    printf("remainder = %d",d);

    return 0;

}