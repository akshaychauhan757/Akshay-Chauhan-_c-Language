// structure: Dot operator
#include <stdio.h>
#include <string.h>  

struct student {
    char Name[40];
    int age;
    unsigned long mobile;
};

int main() {
    struct student std;

    printf("Enter Name: ");
    fgets(std.Name, sizeof(std.Name), stdin);
    std.Name[strcspn(std.Name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &std.age);

    printf("Enter Mobile: ");
    scanf("%lu", &std.mobile);

    printf("Student name: %s\n", std.Name);
    printf("Student age: %d\n", std.age);
    printf("Student mobile: %lu\n", std.mobile);

    return 0;
}
