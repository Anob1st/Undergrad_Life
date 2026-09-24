#include <stdio.h>
int main() {
    char text[] = "engineering";
    int vowels = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'a' || text[i] == 'e' ||
            text[i] == 'i' || text[i] == 'o' ||
            text[i] == 'u')
            vowels++;
    }
    printf("Vowels = %d", vowels);

    return 0;
}
