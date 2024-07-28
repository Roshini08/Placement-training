#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "binary.dat";
    int data = 12345;

    
    fptr = fopen(filename, "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing binary!\n");
        return 1;
    }

   
    fwrite(&data, sizeof(int), 1, fptr);

    
    fclose(fptr);

    printf("Binary data written to file successfully.\n");

    return 0;
}
