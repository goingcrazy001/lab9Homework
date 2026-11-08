# Домашнее задание к работе 9
## Условие задачи
Напишите программу, выводящую на экран заданную в ДЗ лаб.6 геометрическую фигуру, нарисованную с помощью заданного с клавиатуры символа.

<img width="383" height="339" alt="image" src="https://github.com/user-attachments/assets/ce40895f-8460-4c8f-bcab-2753f719d1bc" />

### Алгоритм
1. Начало.
2. Ввести символ `symbol` для построения фигуры.
3. Ввести значение высоты треугольника `a` и половины его основания `b`.
4. Запустить цикл `for` с переменной `y`, которая будет отслеживать текущую строку. Цикл продолжается от `y = 0` до `y = a` (включительно).
5. Для текущей строки вычислить половину ширины треугольника `s` по формуле: `s = (b * (a - y) + a / 2)/a`.
6. Запустить внутренний цикл `for` с переменной `x`, изменяющейся от `-b` до `b`.
7. Проверить условие нахождения текущей позиции внутри треугольника `x >= -s && x <= s`.
8. Если условие выполняется, вывести символ `symbol` и пробел. В противном случае вывести два пробела.
9. Продолжить внешний цикл, постепенно уменьшая ширину треугольника.
10. Конец.

### Блок-схема

<img width="642" height="861" alt="image" src="https://github.com/user-attachments/assets/bdb7d5d2-d613-4975-94d3-f9a177b4272e" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22triangle-flowchart%22%20name%3D%22%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%3E7Vxtk5s2EP41zKSdcQaEeft49vnSTpM27aVN0i8d2ehsehi5IOfs%2FPpKIGwhZAwc2L7EvhkO9MbLPtp9VrugmePl5k0MV4t32EehBnR%2Fo5m3GgDAciz6j5VseYkDnKxkHgd%2BVmbsC%2B6Dr4gX6rx0HfgoKTQkGIckWBULZziK0IwUymAc46diswccFs%2B6gnNUKrifwbBc%2BjHwySIrdfO7YOU%2FoWC%2ByM9s2F5Ws4R5Y34nyQL6%2BEkoMieaOY4xJtnecjNGIXt6%2BXPJ%2Bt0dqN1dWIwiUqdDQmBMyp34OAnZ5rdMu9GnSw9GT4uAoPsVnLGaJyphWrYgy5AeGXQXJqvskT8EG0TPMnoIwnCMQxzTspA9lIEP48dXGjDv0p8Gxrv9H2j7hMT4EeU9aJVnOya02Ug4IndwGYQMNx%2BCJYUA0H9FT3T7B17CiDfheKF3nh2rT66nv%2Bzk2T47eXbfX2C45vet3eqad8u2I12jN%2Bg6%2BT7djtLthHdCMUEb4fnxJ%2F4G4SUi8ZY2WQigsDgCnvYAMoa8jI9i5sd8ngxcfgw5fue7ofcipjtcymqJgwEw%2F3r7z83UAM52%2BHWdzI3fB8NsXOSXcF%2FGBF7HM97q4%2BMnMP77l3f%2BysQf3%2FiTP58240E%2BSUXw0HHv%2BSGOyQLPcQTDyb50FON15DO43DKp7du8xXjFgfUvImTLZQvXBBdh56MHuA7JWzhF4QjOHufpiLnoswk9StF%2BwxQALZuFMEmCWV58F4T5WCjy80YRjlBWwuv1ZyNa6uHcmeUeJ0M6vfM5IhXIMMozQgntGIWQBF%2BK8Okcp4bdDqh4TVB8DliiTUA%2B8e5s%2FzPbf23xo9uNUHW7zQ8i%2Bqg%2B7Ruyw89i3b5bepT3qzUFOsWusken2J2kP%2FkUZezSCXpWXDoFwgGnOcT0MjwrgS2hM5WlZF%2FpA4qY%2BqIDUkybI2Z3AspNbnjFMvD9DLwoCb7yS2FPeYWDiKR3bo0065aWBNECxQH5gDapwWZSSc8PxtSSkd%2BojQ8IfTjjMIUUjn0UZ2IqFGUUKC%2BSgAfGVbDknd5D3w%2BieTvw1IP9QYSpQVzFA6yUB4DaVl8JQd5lQOe4brlFM28eRikf%2FT0TpdAEPzwkiJRgvLuIWsgWlGQ1F4wXeDldJ8e5YIWyUZq9y6J%2BTHbaBGiup90M2cPWzLtWVM9rTvV2rs5zVFVSS5gFE9deoC%2BAy7NTpHv6qynd%2FMh2IN0M2HP%2FgVWCUSpntkfvRQe08A62krmtkLkjyRxYBZmbVl%2F03vDa0aaAWrMrbUIN2LJ7ThYCwHNZiHd%2BFlLbmVM4JnZIuJ4o3IT93xrnFYMkxdwNbWC4q006Tl7PloLgrNhHpZqEDvY8%2Fa8gB9m1UDlml8MbdsQZTDAs6o4KSEmUgQ8yLHbohEAolwPsKyavmKyHSeA6xQHsk6HUcF%2BqhdxZxc9CzUVYSPWDPpGBVJ4813p1lFElTM7tpufe8yW47LX9b5nLH6H%2FZV3KNNqQL793pLSA4xV1zqC%2B1upUKwmKpH%2FnW%2FTVbtjf5flq1DrBJbujaJqwf5vUKeNlmRlLPbnpCZ1ya9iBg8ZXKq%2Fxtop42w2Pq7GtSGHsVpKuEWkzQFHSQ70LSRvtOIUQkz0xp9jHvaYhnj1qYuDLeAaBuAbMGhumnV1q4NIZ%2Bmtd%2BBlFMm1YxQGzO%2BFjPMt2oZbh4%2FNF5Y4CvQW7FkFOgYMM30LOMTArLXGnYK6Kb4hgTo7yrWYYplh0rDNFMqomZrXZTRZwhVLaGsMwRCGex3DJSDkl4PQCUCzXvd9XHLPU6dg%2FR0ngox1Foyabi7Gask2MW2viXLbpTrbLKQ7TZmwNfZyys67Wzl2rSM0M57W02tDX4rlTBzd9RFEulJmnYbGUe6d7acjE6EzOUozElii42ZuYW4ZIqiAjGrW9xdnnHQmQKOLnuZkcNYKrJ8%2FkUKNrxyh39FII9VQwSrWB3tlkpYEu2zyBgBzlayqPQmn%2FBDRbRTBTWjd0TfeITaQ4gVuhAV8POkj7HCmMCCxLnAyl9rarV7WnO9kVHDibK53NkyZkNjlKtLLMVh35MqSBuuOnajrQ0jtTrwuCU8z4U675XiibreuaCctpvc7sBt6ZKS0mOW0njjR%2FLdDbxFEvousdWkrVxLkGTw6qGU%2BN4BMlOYI6TPhSPaiXQK1zD6ofn8mwiqbb7WKRU41Tp0sVoY65vSAVYfSjIg67Ho1XGykgjy3VNKWlBgAlD92SXkY6wmTlDkVq2hkRdK9qreeYjjXOc0%2BSFctVUeTBsOj1wEczHFOc4mgQBuzFG5YSw6Pf6cD6dDc9BrPsklgTEsMoyeU3KufCRELqS3YFDVNfmq5OFRma3UXcUM3FuvRhzqpmRS%2F%2BrO%2FHtE1UOB4YahII6hwpXL23znxR8%2FSTZ%2BH19X5IWWf1kGxim%2FrwsHj7DIgoRWp9K8rDaKA8aqOhabTLAG594fJeluTKu%2FILvj278rVCYt%2FJ2z6FBKP5PsFokIgV2bZ0qB9KT0rapicZeg2aUQqCOb25dKDL5VJFfORleXTf5KJPlaiuzlGPiY77VH%2FxoB%2FXRF497nERqKXGOFtW0PUTEs8Ou1R%2BEKS7b0gczH8rQLuUElI7wiINNNhNrFPxMoVX9p3nnLCb7EolHnkP1%2Bgix0QtV7OdSkzK6vAaXT5jdLkyB%2BBS4s2SEhvKyZhttWEpcN23MqwVdvyOPmPA5DLoLrPyiDYc9rd43WT1%2BttYWGqb7lZWQbsEl8ZZ2W7%2BMcLOQn22V9QQnpuvSxzMQZN6WG6THLSh4732hJ9bPrvwGoT02kPrNBtjF888leLzroqvpPg2Ghj1lm0s6z5P5v01dB893H%2B%2BM4PC%2Fiuo5uR%2F%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## Реализация программы
Программа написана на языке C++
```c++
﻿#include <stdio.h>
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
```
## Результат работы программы
```
Введите символ, из которого будет строиться фигура: *
Введите длину высоты треугольника (a): 3
Введите длину половины основания (b): 3

Равнобедренный треугольник:
* * * * * * *
  * * * * *
    * * *
      *
```
## Информация о разработчике
```
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 28
```
