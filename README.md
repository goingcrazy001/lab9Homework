# Домашнее задание к работе 9
## Условие задачи
Написать программу, выводящую на экран заданную геометрическую фигуру, нарисованную с помощью заданного с клавиатуры символа, условие заполнения фигуры и задаваемые параметры фигуры  таблице (остальные можно взять константные)

<img width="696" height="268" alt="image" src="https://github.com/user-attachments/assets/abf7a6c3-0d62-4efe-9b75-425beacbc04f" />

### Задание 
### Алгоритм
1. Начало.
2. Ввести символ `symbol` для построения фигуры.
3. Ввести значение вертикального катета `a` и горизонтального катета `b`.
4. Запустить цикл `for` с переменной `y`, которая будет отслеживать текущую строку. Цикл продолжается от `y = 1` до `y = a` (включительно).
5. Внутри основного цикла, для текущего значения `y`, вычислить количество символов `s`, которое нужно вывести в этой строке, по формуле: `s = b * y / a`.
6. Запустить цикл `for` с переменной `i`, который выполняется `s` раз, выводя символ `symbol`.
7. Конец.

### Блок-схема

<img width="862" height="854" alt="image" src="https://github.com/user-attachments/assets/69d4bf3d-fa11-4023-ab90-e663986d81f4" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=123.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22triangle-flowchart%22%20name%3D%22%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%3E7VvbkqM2EP0aqpIHTyEwYB593aRqk2wyW8nu05ZsNLYyGDkgZ%2Bz9%2BkggLhIYA8ZjT2o8VTa0LiD1UffplkYzp9vDhxDuNr8QD%2FmaoXsHzZxphgGGrsl%2BuOSYSFxdCNYh9kSlXPCIvyMh1IV0jz0USRUpIT7FO1m4IkGAVlSSwTAkL3K1J%2BLLT93BNSoJHlfQL0v%2Fwh7dJNKR4eTynxBeb9InA9tNSrYwrSxGEm2gR14KInOumdOQEJpcbQ9T5PPJS%2Bclabc4UZq9WIgC2qRBRGFIy41EPxE9pkNmzdjsspvJywZT9LiDK17ywhTMZBu69dkdYJcw2iVT%2FoQPiD1l8oR9f0p8EjKZzydl4MHw%2BQfNMBfxRzOm2fWPrH5EQ%2FKM0hasyLUdE9q8JxLQBdxin8PmM94yCBj6r%2BiFff9BtjAQVQRe2MiT%2B%2BqH6%2FEneXhyzR%2BejPtf6O%2FFuLWZrrkz%2Fj3RNTbAkZNes%2B9J%2FD0XjVBI0aEwf2LGPyCyRTQ8siqbAigsgYCXHEBgKGSiFzO9F8vEFLdQwHed9ZxrmF0IJVcr3BgY5p8fv42XwHCOw%2B%2F7aA1%2BHwyTfpFXgn0ZEmQfrkQtsqcoLCOF9fIobklIN2RNAujPc%2BkkJPvA49iYcRXldT4SshMo%2BhtRehSKhHtKZIx56AnuffoRLpE%2Fgavnddxjqudk9U5iaI%2F5ameylQ%2BjCK9S8QL7aV8o8NJKAQlQIhHl%2BsXwVVo4C7Pc4tVgzUa%2BRrQGB6AM%2F0och8iHFP8rg6V3VAL7jcESHTD9Iprz66%2F8%2BsESd7NDoWh2TG8CNlVf8or89muxLG8W36XtGi2BXrFb2aJX7M7jj%2FqIMnbZAr0pLh2JXcBlCjG9DM9aYCvojHWpOFM2QQE3X6xDhmlzwp0MZkRkLAq22PMS8KIIfxevwmd5R3BA45FbE82aMQkONijE9DM6xN6ZayV%2BvjFlbov%2Bxhw6pmxypn4MKRJ6KEzUJIkSvpOKFOAZ0zpYikafoOfhYN0NPM1gfxJh1SCuc%2FpW7PSNxi6%2BEoKiyYCtcd0aST59YJ5Gqej9E1dloQp5eooQLcE4e4lGyC4YyXriF27IdrmPzhO%2FGmNT6fbui%2Bdx3WlzQxu52njIJ1szF514ndue12VxzSWmKmqkTMnFdVfoGyDu%2FBHxlb7kV1NDmzjxlHMzvYg13Im2W2X1Oop6DUum7W7NGr%2FME7ndGBJmjuudIaEWxHh0S8JhGJcSDvf2hKNx3FYRg9g%2BFSZBGoT9z56kBYMoxtyYVQCj3SHuJy3nKR64kttUWaFCA3sd%2F1bwgORdmB6T1xEVe6IHpjGUbUcNpBR2IDoZyg164QoFc3F9rlB0LWP%2Bd3%2BuBcc%2BxIZbPioBBz16RcIwdHsgDDhYfcPvpKGs2Zg0JDrmigWdtFqV3rNkrVqGrFXL7kGrIjZ%2BT%2BfWpHPHIm3Lv4vW3e5N08r6BUBZv04fmgbdyF8h5f%2FK5C%2FPtC59snqWUq3gAqb3nqJtTTQc12nNLID%2BoBc%2BQCYqwJI7TEYi%2BriIfqC3tj1xHuhpGJSFPl8LJdVhUBHkDDgIeBZy2uRsMzLVK5jrMmpFMEfVpngodtNaY5hh0bFulDtDo26AvF3YfQ6Qdwquug2By5HUyvRJxs5W%2FXePxq5NSud%2FAKL7cbeFeKi%2FDdATeBopeHKdB8V9JnajD0TV0Yh6UEUbuOOXrBb0feSTdQi3PNWDQqaTOD8kl33KC87FFXHfPwcR9lAGHxZgCJXWR5JzMLPmzn0HGtFxuyR%2BXI1nmvnPslN4YVeEFyNL8oUmyOCTsbFrHRVxmgDnGhmDO80FHbOMwfHCjEGVopWdBVs9EHQ1NXdkODXJc9ld5b4kP5lTwIQMoEZp40LwOLRdKXx8cF2nRQh5RwSoGoRdwod4uAX7HAvLTrBuzZ%2F1ilVZkUpPWYC4khNjyjPS3YqT%2FpRBBx4LFcTWw0l3aygbco6lHIpU6jvAfXDMdk2UXJ6tt37EUH4Eu0jG2YySOiZ4MOxGHKLUl630ZbqWSkf6I7iVCOu4j1mH1itbm8olqNcuwcsOSLz6aaymGdVrmQK%2BHeYMlf2si22Bo9gC4NYvVNtqWV8xBOfqW2Zt%2FTNWwFJWrqFuITQ1Aao5AeoO05UNAOiazL7dYm%2Fgby%2FMZd89ESnzh0KK66o2okWsrSwwS83dNF4iStCebd%2B91hIxTq%2BI%2B4%2FZ30Isl8bsrxWll9KI%2FR0Ms7qZ00IO7EYHw1rwqczEggcdKBGfpZtnDG1lQNT6VP1bNtE3Oz8%2FejdkV%2Bbk1jQ9qBbt%2BMG2ikNz%2FND%2FwEMrEjKVk2DgY%2F7PT%2Fz8nDi3F3esL7NVMFglr8Sr0BAGUaq%2FSfngXFA4J5e8Qctzci1tKzANxbZao%2Fa2ld3m%2F3mZuO38%2F1fN%2BX8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## Реализация программы
Программа написана на языке C++
```c++
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
```
## Результат работы программы
```
Введите символ, из которого будет строиться фигура: *
Введите длину вертикального катета (a): 5
Введите длину горизонтального катета (b): 10

Прямоугольный треугольник:
**
****
******
********
**********
```
## Информация о разработчике
```
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 3
