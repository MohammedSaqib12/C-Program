#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    printf("You entered: %s\n", input);

    int length = strlen(input);
    printf("Length of string: %d\n", length);

    char copy[100];
    strcpy(copy, input);
    printf("Copy of the string: %s\n", copy);

    strcat(copy, " Concatenated!");
    printf("Concatenated String: %s\n", copy);

    char *found = strchr(input, 'a');
    if (found != NULL) {
        printf("Found 'a' at position: %ld\n", found - input + 1);
    } else {
        printf("'a' not found in the string.\n");
    }

    return 0;
}
