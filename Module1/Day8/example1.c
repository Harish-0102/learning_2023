#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char Source_File[100], Destination_File[100];
    char ch;

    printf("Enter the name of the source file: ");
    scanf("%s", Source_File);

    // Open the source file in read mode
    sourceFile = fopen(Source_File, "r");
    if (Source_File == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    printf("Enter the name of the destination file: ");
    scanf("%s", Destination_File);

    destinationFile = fopen(Destination_File, "w");
    if (Destination_File == NULL) {
        printf("Error opening the destination file.\n");
        fclose(Source_File);
        return 1;
    }

    while ((ch = fgetc(Source_File)) != EOF) {
        fputc(ch, Destination_File);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(Source_File);
    fclose(Destination_File);

    return 0;
}