#include <stdio.h>

int main()
{
 int choice;
 scanf("%d",&choice);

 switch(choice){
 case 1: printf("Add"); break;
 case 2: printf("Subtract"); break;
 case 3: printf("Multiply"); break;
 case 4: printf("Divide"); break;
 default: printf("Invalid");
 }

 return 0;
}
