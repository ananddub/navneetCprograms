#include<stdio.h>
void minus(int x){
    if(x==0) return;
     printf("%d ",x);
     minus(x-1);
     return;
}
void plus(int y,int z){
    printf("%d ",z);
    if(z==y) return;
    plus(y,z+1);
    return;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    minus(n);
    plus(n,1);
    return 0;
}