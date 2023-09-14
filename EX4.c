#include <stdio.h>

int main() {
    int rrn[3] = {1, 2, 3};

    printf("The list of students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: %03d\n", i + 1, rrn[i]);
    }

    char students[9][3][50] = {
        {"001", "Tamil", "A"}, {"001", "English", "B"}, {"001", "Maths", "A"},
        {"002", "Tamil", "B"}, {"002", "English", "C"}, {"002", "Maths", "B"},
        {"003", "Tamil", "C"}, {"003", "English", "A"}, {"003", "Maths", "A"}
    };

    printf("\nList Students, subjects, and grades:\n");
    printf("RRN\tSubject\tGrade\n");

    for (int i = 0; i < 9; i++) {
        printf("%s\t%s\t%s\n", students[i][0], students[i][1], students[i][2]);
    }

    return 0;
}
