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
