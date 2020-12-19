#include <stdio.h>
#include <string.h>

int main() {

    printf("Good Morning");
    printf("Good Night");

    printf("\n");

    printf("Good Morning\n");
    printf("Good Night\n");

    int x, y;
    x = 10;
    y = 20;
    printf("%d\n", x);
    printf("%d\n", y);

    double z;
    z = 2.3456;
    printf("%.2lf\n", z);

    int age;
    double salary;
    char name[50];
    char genre;

    age = 32;
    salary = 4560.9;
    strcpy(name, "Maria Silva");
    genre = 'F';
    printf("The employee %s, genre %c, earn %.2lf and have %d years old\n", name, genre,
    salary, age);

    return 0;
}
