#include <stdio.h>

int main() {
    char ch;
    FILE *source = fopen("source.txt", "r");
    FILE *destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);
    return 0;
}
