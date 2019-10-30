#include<stdio.h>
int main()
{
 int n=8;
 unsigned long int factorial=1;
 if(n<0)
    {printf("invalid number");}
 else {
        for(int i=2;i<=n;i++)
       {
          factorial=factorial*i;
       }
      }
printf("factorial=%lu",factorial);
return 0;
}

