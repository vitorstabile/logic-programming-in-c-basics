#include <stdio.h>
#include <string.h>

int main() {

    int age;
    double salary, height;
    char genre;
    char name[50];

    age = 20;
    salary = 5800.5;
    height = 1.63;
    genre = 'F';
    strcpy(name, "Maria Silva");

    printf("AGE = %d\n", age);
    printf("SALARY = %.2lf\n", salary);
    printf("HEIGHT = %.2lf\n", height);
    printf("GENRE = %c\n", genre);
    printf("NAME = %s\n", name);

    return 0;
}
