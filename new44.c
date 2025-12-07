// Arror operator
#include <stdio.h>
#include <string.h>

struct student {
    char Name[40];
    int age;
    unsigned long mobile;
};

int main() {
    struct student std;
    struct student *ptr = &std;   // pointer to structure

    printf("Enter Name: ");
    fgets(ptr->Name, sizeof(ptr->Name), stdin);
    ptr->Name[strcspn(ptr->Name, "\n")] = '\0';  // remove newline

    printf("Enter age: ");
    scanf("%d", &ptr->age);

    printf("Enter Mobile: ");
    scanf("%lu", &ptr->mobile);

    printf("Student name: %s\n", ptr->Name);
    printf("Student age: %d\n", ptr->age);
    printf("Student mobile: %lu\n", ptr->mobile);

    return 0;
}
