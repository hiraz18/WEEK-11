#include <stdio.h>

struct Student {
    char name[30];
    char className[10]; // Do not use 'class' as a variable name
    int rollno;
    int enroll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Use a fixed-size array for portability
    struct Student s[100];
    if(n > 100) {
        printf("Maximum allowed students is 100.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Class: ");
        scanf("%s", s[i].className);
        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        printf("Enrolment No: ");
        scanf("%d", &s[i].enroll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Records:\n");
    for(int i = 0; i < n; i++) {
        printf("Name: %s, Class: %s, Roll No: %d, Enrolment: %d, Marks: %.2f\n",
            s[i].name, s[i].className, s[i].rollno, s[i].enroll, s[i].marks);
    }
    return 0;
}


