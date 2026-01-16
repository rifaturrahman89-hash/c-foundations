
   #include <stdio.h>

int main() {
    FILE *fp;
    int num;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1; // Exit if file not found
    }

    // Read integers one by one until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        printf("%d\n", num);
    }

    // Close the file
    fclose(fp);

    return 0;
}
 
