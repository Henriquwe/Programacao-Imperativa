//
// Created on 30/08/2022.
// PBL C2
//Grupo N° 30
//Nome: GILBERTO NUNES
//Nome: HENRIQUE ALVES

#include <stdio.h>
#include <stdbool.h>

int pbl2ex1(void) {
    int vogais = 0, consoantes = 0;
    char caracter;

    while (true) {
        printf("Digite um caracter a-z para verificacao ou 0 para sair do programa \n");
        scanf("%c", &caracter);
        // Essa linha mudou totalmente como o código se comportava e eu não sei dizer porque
        fflush(stdin);

        if (caracter == 'a' || caracter == 'A' || caracter == 'e' ||
            caracter == 'E' || caracter == 'i' || caracter == 'I' ||
            caracter == 'o' || caracter == 'O' || caracter == 'u' ||
            caracter == 'U') {

            vogais++;

        } else if (caracter == '0') {
            printf("O numero de vogais digitadas foi de: %d \n", vogais);
            printf("O numero de consoantes digitadas foi de: %d \n", consoantes);
            printf("Encerrando o programa =) !");
            return 0;

        } else {

            consoantes++;
        }
    }
}

int pbl2ex2(void) {
    int valor_inferior = 0, valor_superior = 0, chances = 0;

    while (true) {
        printf("Digite 0 em ambos intervalos caso queira encerrar o programa \n");
        printf("Digite o valor inferior do intervalo: \n");
        scanf("%d", &valor_inferior);
        fflush(stdin);
        printf("Digite o valor superior do intervalo: \n");
        scanf("%d", &valor_superior);
        fflush(stdin);

        if (valor_inferior < valor_superior && chances < 2) {

        } else if (valor_inferior != 0 && valor_superior != 0 && chances < 2 && valor_inferior >= valor_superior) {
            printf("Numeros invalidos, tente novamente! \n");
            chances++;
        } else if (chances == 2) {
            printf("Chances esgotadas, encerrando o programa =(");
            return 0;
        }
    }
}

//int main(void) {
   // pbl2ex1();
   // pbl2ex2();
//}