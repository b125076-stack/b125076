#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    float total_marks = 0.0, average_marks;
    int highest_index = 0;

    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        total_marks += s[i].marks;

        if (s[i].marks > s[highest_index].marks) {
            highest_index = i;
        }
    }

    average_marks = total_marks / 5.0;

    printf("\n--- Student Analysis Results ---\n");
    printf("Student with the highest marks:\n");
    printf("Roll Number: %d\n", s[highest_index].roll_no);
    printf("Name: %s\n", s[highest_index].name);
    printf("Marks: %.2f\n", s[highest_index].marks);
    
    printf("\nAverage marks of the class: %.2f\n", average_marks);

    return 0;
}