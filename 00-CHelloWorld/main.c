#include <stdio.h>

int main() {
    char* message = "Hello, world!";
    printf("%s", message);
    FILE *fileptr = fopen("output.txt", "w");
    fprintf(fileptr, "%s", message);
    fclose(fileptr);
    return 0;
}
