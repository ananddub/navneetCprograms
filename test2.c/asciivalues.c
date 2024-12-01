#include<stdio.h>
int main(){

    int x=65;
    while(x<91){
        char ch = (char)x;
        printf("\n%c : ",ch);
        printf("%d",x);
        x++;
    }
    return 0;
}