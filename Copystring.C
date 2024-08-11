#include <stdio.h>
void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char src[] = "Hello, World!";
    char dest[100];
    copyString(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}
