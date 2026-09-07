#include <stdio.h>

int main()
{
 int n,temp,sum=0,d;
 scanf("%d",&n);
 temp=n;

 while(temp!=0){
  d=temp%10;
  sum += d*d*d;
  temp/=10;
 }

 if(sum==n) printf("Armstrong");
 else printf("Not Armstrong");

 return 0;
}
