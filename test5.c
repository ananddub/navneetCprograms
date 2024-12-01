#include<stdio.h>
int main()
{
    int a,b,c;

    printf("value of a = ");
   scanf("%d",&a);

   printf("value of b = ");
   scanf("%d",&b);

   c = b/a;

   float d,f,g,h;

   printf("value of d = ");
   scanf("%f",&d);

   printf("value of f = ");   
   scanf("%f",&f);

   g = f/d;

   h = (g-c)*a;

   printf("remainder = %f",h);

     return 0;
}

