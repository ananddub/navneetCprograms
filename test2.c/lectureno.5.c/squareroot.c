#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    
    int b = sqrt(a);

    printf("The square root of %d is %d\n\n",a,b);
    
    return 0;
}