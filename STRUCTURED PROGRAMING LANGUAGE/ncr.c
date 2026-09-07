#include <stdio.h>

long long fact(int n)
{
 long long f=1;
 for(int i=1;i<=n;i++)
  f*=i;
 return f;
}

int main()
{
 int n,r;
 scanf("%d%d",&n,&r);

 if(r<0 || r>n)
  printf("Invalid");
 else
  printf("%lld",fact(n)/(fact(r)*fact(n-r)));

 return 0;
}
