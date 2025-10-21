#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int rollno;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[100], temp;
    if (n > 100) {
        printf("Maximum 100 students allowed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Student %d Name: ", i+1);
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Sort by marks descending
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }

    printf("\nRecords (Rank-wise):\n");
    for (int i = 0; i < n; i++) {
        printf("Rank %d: Name: %s, Roll No: %d, Marks: %.2f\n",
            i+1, s[i].name, s[i].rollno, s[i].marks);
    }
    return 0;
}

