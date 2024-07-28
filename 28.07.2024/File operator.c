#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "example.txt";
    char text[] = "Hello, world!";

    
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

 
    fprintf(fptr, "%s", text);

    
    fclose(fptr);

    printf("Text written to file successfully.\n");

    return 0;
}
