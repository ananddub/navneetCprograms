#include<stdio.h>
int maximum(int a,int b,int c,int d){
    int x,y,z;
    if(a>b) x = a;
    else x = b;
    if(b>c) y = b;
    else y = c;
    if(x>y) z = x;
    else z = y;

    return z;
}
int main(){
    int age,bjp = 0,congress = 0,aap = 0,bsp = 0;//1 bjp 2 congress 3 aap 4 bsp

    for(int i=1;i<=999;i++){
    printf("\n              WELCOME TO OUR VOTING CENTER");
    printf("\n\nVOTER %d\n\nEnter your age to continue : ",i);
    scanf("%d",&age);

    if(age<18) printf("\n       You are not eligible to vote\n\n\n");
    else{
    printf("\nPLEASE VOTE YOUR REPRENSENTATIVE\n");
    printf("\nPress 1 for bjp\nPress 2 for congress\nPress 3 for aap\nPress 4 for bsp\n");
    
    int vote;
    printf("\nEnter your choice here : ");
    scanf("%d",&vote);

    if(1<=vote && vote<=4){
       if(vote==1){
        printf("\nYou have successfully voted to BJP\n");
        bjp=bjp+1;}
       if(vote==2){
        printf("\nYou have successfully voted to CONGRESS\n");
        congress=congress+1;}
       if(vote==3){
        printf("\nYou have successfully voted to AAP\n");
        aap=aap+1;}
       if(vote==4){
        printf("\nYou have successfully voted to BSP\n");
        bsp=bsp+1;}
    }
    else printf("\n\nENTER THE VAID NUMBER\n\n\n");
    }
    
    int ask;
    printf("\nTo continue press any number other than 0 or to end press 0 : ");
    scanf("%d",&ask);
    if(ask==0) break;
    }
    if(bjp==0 && bsp==0 && congress==0 && aap==0) printf("\n\n NO VOTE HAS BEEN DONE\n\n");
    else{ 
    printf("\nVOTE RESULT : ");
    printf("\n\nBJP got %d votes\nCONGRESS got %d votes\nAAP got %d votes\nBSP got %d votes",bjp,congress,aap,bsp);

    int k = maximum(bjp,congress,aap,bsp);

    if(k==bjp && k==congress) printf("\n\nBJP and CONGRESS have equal vote of %d\n\n",k);
    else if(k==bjp && k==aap) printf("\n\nBJP and AAP have equal vote of %d\n\n",k);
    else if(k==bjp && k==bsp) printf("\n\nBJP and BSP have equal vote of %d\n\n",k);
    else if(k==congress && k==aap) printf("\n\nCONGRESS and AAP have equal vote of %d\n\n",k);
    else if(k==congress && k==bsp) printf("\n\nCONGRESS and BSP have equal vote of %d\n\n",k);
    else if(k==aap && k==bsp) printf("\n\nAAP and BSP have equal vote of %d\n\n",k);
    else{
    if(k==bjp) printf("\n\nHence BJP is the winner\n\n");
    if(k==congress) printf("\n\nHence CONGRESS is the winner\n\n");
    if(k==aap) printf("\n\nHence AAP is the winner\n\n");
    if(k==bsp) printf("\n\nHence BSP is the winner\n\n");
    }
    }

    return 0;
}