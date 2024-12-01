#include<stdio.h>
int main(){

    float cp,sp ;

    printf("Cost Price : ");
    scanf("%f",&cp);

    printf("Selling Price : ");
    scanf("%f",&sp);
     
    if(sp>cp){
        printf("Profit of %f",sp-cp);
    }
    if(sp<cp){
        printf("Loss of %f",cp-sp);
    }
    if(sp==cp){
        printf("Neither profit nor loss");
    }
    return 0;

}