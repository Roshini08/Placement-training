#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "example.txt";
    char buffer[100];

   
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    
    if (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("Text read from file: %s\n", buffer);
    }

    
    fclose(fptr);

    return 0;
}
