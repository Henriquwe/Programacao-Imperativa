// Created on 06/09/2022.
// PBL C3
//Grupo N° 30
//Nome: GILBERTO NUNES
//Nome: HENRIQUE ALVES
#include <stdio.h>

int pbl3ex1(void) {
    //Exercício 1 (valor: 5,0 pontos): elabore um programa em C que calcule e
    //imprima os n primeiros termos da Sequência de Fibonacci, onde n é um valor
    //inteiro positivo fornecido pelo usuário. Muito embora a Sequência de Fibonacci
    //seja, usualmente, definida de forma recursiva, o programa deve calcular os n
    //termos por um algoritmo iterativo, isto é, com uso de um comando de
    //repetição. Mais especificamente, o programa deve utilizar o comando for da
    //linguagem C, sendo que cada iteração do comando deve calcular e imprimir um
    //termo da sequência. Não pode ser usado o comando break, nem o comando
    //continue.
    int numeroDeTermos = 0;
    printf("Digite o numero de termos a serem calculados: \n");
    scanf("%d", &numeroDeTermos);

    int numInicial = 1;
    int numPassado = 0;
    int numTermo;
    for (int i = 0; i < numeroDeTermos; i++) {

        numTermo = numInicial + numPassado;
        numPassado = numInicial;
        numInicial = numTermo;

        printf("Numero do termo: %d \n", numTermo);
    }
    return 0;
}

int pbl3ex2(void) {
    // Exercício 2 (valor: 5,0 pontos): Reescreva o programa abaixo fazendo a
    //substituição do comando switch por um ou mais comandos if.
    int k;
    char ch, crip;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &k);
    getchar();

    printf("Digite um caracter: \n");
    ch = getchar();

    if (k == 1) {
    } else if (k == 2) {
        crip = ch + 2;
        printf("%c\n", crip);
    } else if (k == 3) {
        ch = ch + 5;
    } else if (k == 4) {
        crip = ch - 2;
    } else {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vogal \n");
        } else {
            printf("Consoante \n");
        }
    }
    return 0;
}

int main(void) {
    pbl3ex1();
    pbl3ex2();

    return 0;
}