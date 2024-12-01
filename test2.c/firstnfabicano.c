#include<stdio.h>
int fabicanno(int x){
    int a=0,b=1,c;
    for(int i=1;x>=i;i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
    int n;
    printf("Enter the nth term : ");
    scanf("%d",&n);

    if(n>1)printf("1 ");
    
    for(int i=1;n-1>=i;i++){
        int a = fabicanno(i);
        printf("%d ",a);
    }
    return 0;
}