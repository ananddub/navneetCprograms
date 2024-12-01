#include<stdio.h>
int main(){
    void india();
    india();
    //void australia();
    return 0;
}
void india(){
    printf("you are in india\n");
    void australia();
    australia();
    return;
}
void australia(){
    printf("You are in australia\n");
    void england();
    england();
    return;
}
void england(){
    printf("You are in england\n");
    return;
}
