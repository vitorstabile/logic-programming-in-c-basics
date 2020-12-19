#include <stdio.h>
#include <string.h>

int main() {

    double salary1, salary2;
    char name1[50], name2[50];
    int age;
    char genre;

    printf("Name of the first person: ");
    gets(name1);
    printf("Salary of the first person: ");
    scanf("%lf", &salary1);

    printf("Name of the second person: ");
    fseek(stdin,0,SEEK_END); // ----- buffer cleaning
    gets(name2);
    printf("Salary of the second person: ");
    scanf("%lf", &salary2);

    printf("Age: ");
    scanf("%d", &age);
    printf("Genre (F/M): ");
    fseek(stdin,0,SEEK_END); // ----- buffer cleaning
    scanf("%c", &genre);

    printf("Name 1: %s\n", name1);
    printf("Salary 1: %.2lf\n", salary1);
    printf("Name 2: %s\n", name2);
    printf("Salary 2: %.2lf\n", salary2);
    printf("Age: %d\n", age);
    printf("Genre: %c\n", genre);

    return 0;
}
