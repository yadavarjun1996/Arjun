#include<stdio.h>
int main(){
int i,n=8;
unsigned long int factorial=1;
if(n<0)
    {printf("invalid number");}
else {
    for(i=n;i>=1;i--){
    factorial=factorial*i;
    }
}
printf("factorial=%lu",factorial);
return 0;
}
