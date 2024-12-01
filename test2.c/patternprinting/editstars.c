#include<stdio.h>
int main(){

    int length,breadth;
    printf("Enter the lenght  : ");
    scanf("%d",&length);
    printf("enter the breadth : ");
    scanf("%d",&breadth);
    
    int b=1;
    while(breadth>=b){
        b++;
        for(int l=1;length>=l;l++){
            printf("*");
        }
        printf("\n");
    }

    //for(int b=1;breadth>=b;b++){
        
      //  for(int l=1;length>=l;l++){
        //    printf("*");
          //  }
        
       //printf(" \n");
    //}

    return 0;
}