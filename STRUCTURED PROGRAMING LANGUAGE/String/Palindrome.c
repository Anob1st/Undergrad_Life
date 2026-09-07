#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int palindrome = 1;
    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            palindrome = 0;
            break;
        } }



    if (palindrome)
        printf("Palindromme");
    else
        printf("Not Palindrome");
    return 0;
}
