#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    if(n%5==0 && n%3==0){
        printf("its divisible by 5 and 3");
    }
    else{
        printf("its not divisible by 5 and 3");
    }
    return 0;
}
