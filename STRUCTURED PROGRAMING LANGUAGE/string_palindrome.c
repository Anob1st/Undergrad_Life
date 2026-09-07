#include <stdio.h>
#include <string.h>

int main()
{
 char s[100];
 scanf("%99s",s);
 int i=0,j=strlen(s)-1,ok=1;

 while(i<j){
  if(s[i]!=s[j]){
   ok=0;
   break;
  }
  i++;
  j--;
 }

 if(ok) printf("Palindrome");
 else printf("Not palindrome");

 return 0;
}
