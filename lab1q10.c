#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n;
    struct Student *arr;
    struct Student *highest;

    printf("Enter the number of students (N): ");
    scanf("%d", &n);

    arr = (struct Student *)malloc(n * sizeof(struct Student));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("\nEnter details for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &(arr + i)->roll_no);
        printf("Enter Name: ");
        scanf("%s", (arr + i)->name);
        printf("Enter Marks: ");
        scanf("%f", &(arr + i)->marks);
    }


    highest = arr;

    
    for (int i = 1; i < n; i++) {
        if ((arr + i)->marks > highest->marks) {
            highest = (arr + i);
        }
    }

    
    printf("\n--- Student with the Highest Marks ---\n");
    printf("Roll Number: %d\n", highest->roll_no);
    printf("Name: %s\n", highest->name);
    printf("Marks: %.2f\n", highest->marks);


    free(arr);

    return 0;
}