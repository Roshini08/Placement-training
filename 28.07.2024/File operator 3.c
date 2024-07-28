#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "example.txt";
    char text[] = "\nAppending some more text.";

    
    fptr = fopen(filename, "a");
    if (fptr == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }

    
    fprintf(fptr, "%s", text);

    
    fclose(fptr);

    printf("Text appended to file successfully.\n");

    return 0;
}
