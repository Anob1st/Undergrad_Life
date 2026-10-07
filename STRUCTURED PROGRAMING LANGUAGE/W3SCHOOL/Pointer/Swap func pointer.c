#include<stdio.h>

void swap(int *p,int *q)
{
    
    
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    
    
}    
    
int main()
{
    int a=111,b=222;
    swap(&a,&b);
    
    printf("a=%d\nb=%d",a,b);

    return 0;


}
