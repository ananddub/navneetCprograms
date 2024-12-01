#include<stdio.h>
int main(){

int n;
printf("enter your number : ");
scanf ("%d", &n);

int b,c=0,d=n,e;

while(d!=0){
b=d%10;
d=d/10;
c=10*c+b;
}
e = c+n;
printf("sum of your number %d and its reverse %d is %d",n,c,e);

return 0;
} 