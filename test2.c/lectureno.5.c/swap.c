#include<stdio.h>
void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    printf("\nEnter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("\nThe value of a is %d\nThe value of b is %d\n\n",a,b);

    return 0;
}