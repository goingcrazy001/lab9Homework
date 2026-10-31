#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");
    char symbol;
    int a, b;
    printf("Введите символ, из которого будет строиться фигура: ");
    scanf(" %c", &symbol);
    printf("Введите длину вертикального катета (a): ");
    scanf("%d", &a);
    printf("Введите длину горизонтального катета (b): ");
    scanf("%d", &b);

    printf("\nПрямоугольный треугольник:\n");
    for (int y = 1; y <= a; y++) {
        int s = b * y / a;
        for (int i = 0; i < s; i++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
