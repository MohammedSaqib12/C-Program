#include<stdio.h>
int main()
{
    int div, first_num, second_num;
    printf("Enter the first number: ");
    scanf("%d", &first_num);
    printf("Enter the second number: ");
    scanf("%d", &second_num);
    
    div = first_num / second_num;
    printf("The division of two numbers is: %d", div);

    return 0;
}
