#include <stdio.h>

char* ReverseOfString(char str[]);

int main() {
    char str1[100], *revstr;
    printf("\n\nRecursion: Get reverse of a string:\n");
    printf("Input any string: ");
    scanf("%s", str1);
    revstr = ReverseOfString(str1);
    printf("The reversed string is: %s\n\n", revstr);
    return 0;
}

char* ReverseOfString(char str[]) {
    static int i = 0;
    static char revstr[100];
    if (*str) {
        ReverseOfString(str + 1);
        revstr[i++] = *str;
    }
    revstr[i] = '\0'; // Null-terminate the reversed string
    return revstr;
}
