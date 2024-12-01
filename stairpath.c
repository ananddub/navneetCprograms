#include<stdio.h>
int nways(int x){
    if(x==1 || x==0) return 1;
    if(x<0) return 0;
    return nways(x-1)+nways(x-2)+nways(x-3);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int ways = nways(n);
    printf("There are %d ways to go to the stair",ways);
    return 0;
}
