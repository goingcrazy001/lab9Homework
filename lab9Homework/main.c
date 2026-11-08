#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");
    char symbol;
    int a, b;
    printf("Введите символ, из которого будет строиться фигура: ");
    scanf(" %c", &symbol);
    printf("Введите длину высоты треугольника (a): ");
    scanf("%d", &a);
    printf("Введите длину половины основания (b): ");
    scanf("%d", &b);

    printf("\nРавнобедренный треугольник:\n");
    for (int y = 0; y <= a; y++) {

        int s = (b * (a - y) + a / 2)/a;

        for (int x = -b; x <= b; x++) {

            if (x >= -s && x <= s) {
                printf("%c ", symbol);
            }
            else {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}