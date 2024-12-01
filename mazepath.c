#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways = 0;
    int downways = 0;

    if(cr==er && cc==ec) return 1;
    if(cr==er){//only right ways call
      rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){//only downwards call
      downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways = rightways +  maze(cr,cc+1,er,ec);
        downways = downways + maze(cr+1,cc,er,ec);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int m,n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    printf("Enter the no. of coloumns : ");
    scanf("%d",&m);

    int noOfways = maze(1,1,n,m);
    printf("%d",noOfways);
return 0;
}