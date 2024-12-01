#include<stdio.h>
int main(){

    float a,b,c,sum,subtraction,division,multiplication;

    printf("enter first number : ");
    scanf("%f",&a);
    printf("enter second number : ");
    scanf("%f",&b);
    printf("what to do : ");
    scanf("%f",&c);
   
   sum = a + b;
   subtraction = a - b;
   multiplication = a * b;
   division = a / b;

    if(c == 1){
       printf("Sum of %f  and %f is : %f",a,b,sum);}
    else if(c == 2){
       printf("Subtraction of %f in %f is : %f",a,b,subtraction);}
    else if(c == 3){
       printf("Multiplication of %f and %f is : %f",a,b,multiplication);}
    else if(c == 4){
       printf("Division of %f by %f is : %f",a,b,division);}

       return 0;

}