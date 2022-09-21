#include<stdio.h>
#include<locale.h>

int main()
{
    float x = 333;
    float n = 3;
    setlocale(LC_ALL, "RUS");
    printf("Дано: \n\t%4.0f \n\t%.0f", n, x);
    printf("\nОтвет: ");
    printf("          \n\t%0+8.2f", n / x);
}