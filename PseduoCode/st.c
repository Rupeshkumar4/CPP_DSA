#include <stdio.h>

int main() {
    int i = 10;
    printf("hey");
    goto label2;
    printf("%d", i);

    while (i) {
        switch (i - 1) {
            case 1:
                label2:
                    printf("%d", i);
        }
    }

    printf("%s", "hello");
    getchar(); // Using getchar() instead of getch() to pause the program

    return 0;
}
