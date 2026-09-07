#include <stdio.h>

int main(){
 int n,x,found=0;
 scanf("%d",&n);
 int a[n];

 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

 scanf("%d",&x);

 for(int i=0;i<n;i++){
  if(a[i]==x){
   found=1;
   break;
  }
 }

 if(found) printf("Found");
 else printf("Not found");

 return 0;
}
