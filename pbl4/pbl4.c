// Created on 28/09/2022.
// PBL C4
// Grupo N° 30
// Nome: HENRIQUE ALVES
// Nome: GILBERTO NUNES
// Exercício Único (valor: 10,0 pontos): Considere o programa contido no arquivo
// Pintores.c, em anexo. Estenda o código de modo que o programa permita o
// usuário pesquisar todos os pintores nascidos em certo mês. O programa deverá
// apresentar uma interface de usuário em conformidade com os exemplos de
// interação a seguir.
#include <stdio.h>
#include <string.h>
const int NUM_MESES = 12;
const int NUM_PINTORES = 20;
enum Mes { JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ };
char *mes_str[NUM_MESES] = {"Janeiro",  "Fevereiro", "Março",    "Abril",
                            "Maio",     "Junho",     "Julho",    "Agosto",
                            "Setembro", "Outubro",   "Novembro", "Dezembro"};
struct Pessoa {
    char nome[50];
    enum Mes mes; // mês de aniversário
};

/*int main(void) {
    struct Pessoa pintor[NUM_PINTORES];
    pintor[0].mes = JAN;
    strcpy(pintor[0].nome, "Leonardo da Vinci");
    pintor[1].mes = ABR;
    strcpy(pintor[1].nome, "Sandro Botticelli");
    pintor[2].mes = AGO;
    strcpy(pintor[2].nome, "Georges Seurat");
    pintor[3].mes = MAR;
    strcpy(pintor[3].nome, "Vincent van Gogh");
    pintor[4].mes = SET;
    strcpy(pintor[4].nome, "Paul Gauguin");
    pintor[5].mes = JUN;
    strcpy(pintor[5].nome, "Edouard Manet");
    pintor[6].mes = OUT;
    strcpy(pintor[6].nome, "Paul Cezanne");
    pintor[7].mes = FEV;
    strcpy(pintor[7].nome, "Auguste Renoir");
    pintor[8].mes = JUN;
    strcpy(pintor[8].nome, "Claude Monet");
    pintor[9].mes = AGO;
    strcpy(pintor[9].nome, "Pablo Picasso");
    pintor[10].mes = DEZ;
    strcpy(pintor[10].nome, "Edgar Degas");
    pintor[11].mes = ABR;
    strcpy(pintor[11].nome, "Edvard Munch");
    pintor[12].mes = SET;
    strcpy(pintor[12].nome, "Michelangelo Merisi");
    pintor[13].mes = JUL;
    strcpy(pintor[13].nome, "Michelangelo Buonarroti");
    pintor[14].mes = SET;
    strcpy(pintor[14].nome, "Tarsila do Amaral");
    pintor[15].mes = AGO;
    strcpy(pintor[15].nome, "Gustav Klimt");
    pintor[16].mes = NOV;
    strcpy(pintor[16].nome, "Rembrandt van Rijn");
    pintor[17].mes = MAI;
    strcpy(pintor[17].nome, "Amedeo Modigliani");
    pintor[18].mes = SET;
    strcpy(pintor[18].nome, "Caillebotte");
    pintor[19].mes = SET;
    strcpy(pintor[19].nome, "Joseph Turner");

    printf("Bem vindo ao acervo de meses dos pintores!\n");
    for (int i = 0; i < NUM_MESES; i++) {
        printf("[%d] %s\n", i + 1, mes_str[i]);
    }
    printf("\nEscolha um mês pelo seu número: ");

    int opcao;
    scanf("%d", &opcao);
    fflush(stdin);

    switch (opcao) {
        int j = 0;
        case 1:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == JAN) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 2:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == FEV) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 3:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == MAR) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 4:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == ABR) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 5:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == MAI) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 6:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == JUN) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 7:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == JUL) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 8:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == AGO) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 9:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == SET) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 10:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == OUT) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 11:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == NOV) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        case 12:
            j = 0;
            for (int i = 0; i < NUM_PINTORES; i++) {
                if (pintor[i].mes == DEZ) {
                    printf("[%d] - %s \n", j + 1, pintor[i].nome);
                    j++;
                }
            }
            break;
        default:
            printf("Opção inválida! \n");
            break;
    }

    return 0;
}*/
