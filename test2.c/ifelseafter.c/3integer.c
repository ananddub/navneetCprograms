#include<stdio.h>
int main(){
  
    float x,y,z;
    printf("enter first side : ");
    scanf("%f",&x);
    printf("enter second side : ");
    scanf("%f",&y);
    printf("enter third side : ");
    scanf("%f",&z);

    if(x+y>z && y+z>x && x+z>y){
        printf("it can form a triangle");
    }
    else{
        printf("it cannot form a triangle");
    }

    return 0;
}