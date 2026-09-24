#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "hello";
    char b[] = "hello";



  
    if (strcmp(a, b) == 0)
        printf("Same");
    else
        printf("Different");

    return 0;
}
