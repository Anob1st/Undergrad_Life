#include <stdio.h>

int main(){
 int n;
 scanf("%d",&n);
 int a[n];

 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

 int big=a[0],second=a[0];

 for(int i=1;i<n;i++){
  if(a[i]>big){
   second=big;
   big=a[i];
  }
  else if(a[i]>second && a[i]!=big)
   second=a[i];
 }

 printf("%d",second);
 return 0;
}
