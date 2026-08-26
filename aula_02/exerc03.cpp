#include <stdio.h>

int main() {
    //Uso de numeros de ponto flutuante para representar temperaturas
    float temp_c, temp_f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp_c);
    //Conversao de Celsius para Fahrenheit
    temp_f = (9.0 / 5.0) * temp_c + 32;

    printf("Temperatura em Fahrenheit: %.2f °F\n", temp_f);

    return 0;
}