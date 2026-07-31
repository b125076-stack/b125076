#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;

    printf("Enter student details:\n");
    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll_no);
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Displaying Student Details ---\n");
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}