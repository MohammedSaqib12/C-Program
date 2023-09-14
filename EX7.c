#include <stdio.h>
#include <stdlib.h>

struct student_data {
    char stu_name[30];
    int stu_id;
    int stu_age;
};

union data {
    char stu_name[30];
    int stu_id;
    int stu_age;
};

int main() {
    struct student_data student;

    printf("Enter student name: ");
    scanf("%s", student.stu_name);
    printf("Enter student roll number: ");
    scanf("%d", &student.stu_id);
    printf("Enter student age: ");
    scanf("%d", &student.stu_age);

    printf("\n Student name is: %s", student.stu_name);
    printf("\n Student id is: %d", student.stu_id);
    printf("\n Student age is: %d", student.stu_age);
    printf("\n size of struct = %lu bytes \n", sizeof(student));

    union data info;
    printf("---------------------\n");
    printf("size of union = %lu bytes", sizeof(info));

    return 0;
}
