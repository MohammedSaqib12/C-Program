#include <stdio.h>
#include <stdlib.h>

FILE *fptr; // Declare a file pointer

int append();
int read();
int write();

char data[1000];
int var;
char buffer[1000] = {0};

int main() {
    while (1) {
        printf("\nSelect an option number:\n");
        printf("1. Write\n");
        printf("2. Read\n");
        printf("3. Append\n");
        printf("4. Exit\n");
        printf("Type your selection here: ");
        scanf("%d", &var);

        switch (var) {
            case 1:
                write();
                break;
            case 2:
                read();
                break;
            case 3:
                append();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong choice\n");
                break;
        }
    }
    return 0;
}

int write() {
    char name[200];
    fptr = fopen("abc.txt", "w");
    if (fptr == NULL) {
        printf("The file is not created...\n");
        return 1;
    }

    printf("Enter a single string: ");
    scanf("%s", name);
    fprintf(fptr, "%s", name);
    printf("The file is created and the string is added...\n");
    fclose(fptr);
    return 0;
}

int read() {
    fptr = fopen("abc.txt", "r");
    if (fptr == NULL) {
        printf("The file is not there...\n");
        return 1;
    } else {
        printf("The file is opened\n");
        printf("It reads the data from the file:\n");
        int result = fread(buffer, sizeof(char), 999, fptr);
        while (result > 0) {
            printf("%s", buffer);
            result = fread(buffer, sizeof(char), 999, fptr);
        }
        fclose(fptr);
        return 0;
    }
}

int append() {
    fptr = fopen("abc.txt", "a+");
    if (fptr == NULL) {
        printf("The file is not there...\n");
        return 1;
    } else {
        printf("Enter one string: ");
        scanf("%s", data);
        fprintf(fptr, "%s", data);
        printf("The file is created and the string is added...\n");
        fclose(fptr);
        return 0;
    }
}
