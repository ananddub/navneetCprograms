#include<stdio.h>
int main(){

    int x1,y1,x2,y2,x3,y3;
    printf("x1 y1 x2 y2 x3 y3 ");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

    if((y2-y1)/(x2-x1)==(y3-y1)/(x3-x1))
       printf("these coordinates are on same straight line");

    else
      printf("these coordinates are not in same straight line");

    return 0;
}