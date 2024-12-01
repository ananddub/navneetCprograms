#include<stdio.h>
int main(){

    float l,b,A,P;
    printf("value of length : ");
    scanf("%f",&l);

    printf("enter value of breadth : ");
    scanf("%f",&b);
    
    A = l*b;
    P = 2*(l+b);

    if(A>P){
        printf("area is greater than its perimeter");
    }
    if(A==P){
        printf("both area and perimeter are equal");
    }
    else{
        printf("perimeter is greater than its area");
    }
    return 0;
}