#include <stdio.h>

int main() {
/* Variáveis a criar:

int numero1, numero2;
int soma, subtracao, multiplicacao, resto;
float divisao;

testar com:
-20, 5
-30, 4
-40, 3
-50, 2
-60, 1

2 casas decimais*/

int Numero1 = "20", Numero2 = "5";
int Soma = Numero1 + Numero2, Subtracao = Numero1 - Numero2, Multiplicacao = Numero1 * Numero2, Resto = Numero1 % Numero2;
float Divisao = Numero1 / Numero2;

printf("Resultados:\n");
printf("Numero 1: %d\n", Numero1);
printf("Numero 2: %d\n", Numero2);
printf("Soma: %d\n", Soma);
printf("Subtração: %d\n", Subtracao);
printf("Multiplicação: %d\n", Multiplicacao);
printf("Divisão: %f\n", Divisao);
printf("Resto: %d\n", Resto);
}


















