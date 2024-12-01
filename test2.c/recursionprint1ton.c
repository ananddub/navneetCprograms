#include<stdio.h>
void increasing(int a,int c){
    printf("%d\n",a);
    if(a==c) return;
    increasing(a+1,c);
    return;
}
int main(){
    int b;
    printf("Enter the number : ");
    scanf("%d",&b);
    increasing(1,b);
    
    return 0;
}
