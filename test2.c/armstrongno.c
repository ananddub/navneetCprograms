#include<stdio.h>
int main(){
    int n;
   // printf("enter the number : ");
    //scanf("%d",&n);

    int a=1,b,c,d,e;
    //while(n>=a){
        b=a%10;
        c=(a/10)%10;
        d=(a/100)%10;
        e=(b*b*b)+(c*c*c)+(d*d*d);
       // if(e=a){
           // printf("%d ",e);  }
           printf("%d %d %d\n",b,c,d);
        //a++;
   // }
    return 0;
}