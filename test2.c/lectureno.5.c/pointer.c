#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;
    //*x=7;
    printf("%p\n",&a);//%p se address print hota hai
    printf("%d",*x);

    return 0;
}