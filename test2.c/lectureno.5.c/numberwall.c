#include<stdio.h>
int minimum(int a, int b){
    int min=a;
    if(b<a) min=b;
    return min;
}
    int main(){
        int a,b;
        int min =0;
        
        printf("Enter the first number : ");
        scanf("%d",&a);
        printf("Enter the second number : ");
        scanf("%d",&b);

        min = minimum(a,b);
        printf("Minimum of the two number is : %d",min);

        return 0;
    }
