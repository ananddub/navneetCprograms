#include<stdio.h>
int main(){
    float a,b,c,result;
    printf("enter first number : ");
    scanf("%f",&a);
    printf("enter second number : ");
    scanf("%f",&b);
    printf("what to do : ");
    scanf("%f",&c);

    if(c==1){
        result = a+b;
        printf("sum of %f and %f is : %f",a,b,result);
    }
    else if(c==2){
        result =a-b;
        printf("subtraction of %f in %f is : %f",b,a,result);
    }
    else if(c==3){
        result = a/b;
        printf("division of %f by %f is : %f",a,b,result);
    }
    else if(c==4){
        result = a*b;
        printf("multilication of %f and %f is : %f",a,b,result);
        
    }
return 0;

}