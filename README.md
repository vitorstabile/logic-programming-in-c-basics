<h1 align="center"> C </h1>

# Content

1. [Chapter 1: The C Language](#chapter1)
    - [Chapter 1 - Part 1: First Program in C](#chapter1part1)
    - [Chapter 1 - Part 2: Variables Types in C](#chapter1part2)
    - [Chapter 1 - Part 3: Data Output in C](#chapter1part3)
    - [Chapter 1 - Part 4: Data Processing in C](#chapter1part4)
    - [Chapter 1 - Part 5: Data Casting in C](#chapter1part5)
    - [Chapter 1 - Part 6: Data Input in C](#chapter1part6)
    - [Chapter 1 - Part 7: Conditional Statement in C](#chapter1part7)
    - [Chapter 1 - Part 8: While Statement in C](#chapter1part8)
    - [Chapter 1 - Part 9: For Statement in C](#chapter1part9)
    - [Chapter 1 - Part 10: Vectors in C](#chapter1part10)
    - [Chapter 1 - Part 11: Matrix in C](#chapter1part11)
  
## <a name="chapter1"></a>Chapter 1: The C Language

#### <a name="chapter1part1"></a>Chapter 1 - Part 1: First Program in C

```c

#include <stdio.h>

int main() {

    printf("Hello World!\n");

    return 0;

}

```

#### <a name="chapter1part2"></a>Chapter 1 - Part 2: Variables Types in C

```c

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

```

#### <a name="chapter1part3"></a>Chapter 1 - Part 3: Data Output in C

```c

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

```

#### <a name="chapter1part4"></a>Chapter 1 - Part 4: Data Processing in C

```c

#include <stdio.h>
#include <string.h>

int main() {

    int x1, y1;
    x1 = 5;
    y1 = 2 * x1;
    printf("%d\n", x1);
    printf("%d\n", y1);

    int x2;
    double y2;
    x2 = 5;
    y2 = 2 * x2;
    printf("%d\n", x2);
    printf("%.1lf\n", y2);

    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);

    int a, b, result;
    a = 5;
    b = 2;
    result = a / b;
    printf("%d\n", result);

    return 0;
}

```

#### <a name="chapter1part5"></a>Chapter 1 - Part 5: Data Casting in C

```c

#include <stdio.h>
#include <string.h>

int main() {

    double a;
    int b;
    a = 5.0;
    b = (int) a;
    printf("%d\n", b);

    return 0;
}

```

#### <a name="chapter1part6"></a>Chapter 1 - Part 6: Data Input in C

```c

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

```

#### <a name="chapter1part7"></a>Chapter 1 - Part 7: Conditional Statement in C

```c

#include <stdio.h>
#include <string.h>

int main() {

    int time;
    printf("Enter a time of day: ");
    scanf("%d", &time);

    if (6 <= time && time < 12) {
        printf("Good Morning!\n");
    }
    else if (12 <= time && time < 18) {
        printf("Good Afternoon!\n");
    }
    else {
        printf("Good Night!\n");
    }

    return 0;
}

```

#### <a name="chapter1part8"></a>Chapter 1 - Part 8: While Statement in C

```c

#include <stdio.h>
#include <string.h>

int main() {

    int x, sum;

    sum = 0;
    printf("Enter the first number: ");
    scanf("%d", &x);

    while (x != 0) {
        sum = sum + x;
        printf("Enter another number: ");
        scanf("%d", &x);
    }

    printf("SUM = %d\n", sum);

    return 0;
}

```

#### <a name="chapter1part9"></a>Chapter 1 - Part 9: For Statement in C

```c

#include <stdio.h>
#include <string.h>

int main() {

    int N, i, x, sum;

    printf("How many number will be enter? ");
    scanf("%d", &N);

    sum = 0;
    for (i = 1; i <= N; i++) {
        printf("Enter a number: ");
        scanf("%d", &x);
        sum = sum + x;
    }

    printf("SUM = %d\n", sum);
    return 0;
}

```

#### <a name="chapter1part10"></a>Chapter 1 - Part 10: Vectors in C

```c

#include <stdio.h>
#include <string.h>

int main() {

    int N, i;

    printf("How many numbers will be enter? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Enter a number: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nTyped Numbers:\n");
    for (i = 0; i < N; i++) {
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}

```

#### <a name="chapter1part11"></a>Chapter 1 - Part 11: Matrix in C

```c

#include <stdio.h>
#include <string.h>

int main() {

    int M, N, i, j;

    printf("How many rows the matrix will be? ");
    scanf("%d", &M);
    printf("How many columns the matrix will be? ");
    scanf("%d", &N);

    int mat[M][N];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nTyped Matrix:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

```

<!-- URL's -->
