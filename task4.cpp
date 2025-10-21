#include <stdio.h>
#include <string.h>

struct Employee {
    char name[25];
    int age;
    int basic;
    float total;
};

int main() {
    int n = 5;
    struct Employee e[5], t;

    for (int i = 0; i < n; i++) {
        printf("Employee %d Name: ", i+1);
        scanf("%s", e[i].name);
        printf("Age: ");
        scanf("%d", &e[i].age);
        printf("Basic: ");
        scanf("%d", &e[i].basic);

        float da = 0.10f * e[i].basic;
        float hra = 0.05f * e[i].basic;
        e[i].total = e[i].basic + da + hra;
    }

    // Sort by total salary descending
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (e[i].total < e[j].total) {
                t = e[i];
                e[i] = e[j];
                e[j] = t;
            }

    printf("\nName\tAge\tTotal Salary\n");
    for (int i = 0; i < n; i++)
        printf("%s\t%d\t%.2f\n", e[i].name, e[i].age, e[i].total);

    return 0;
}

