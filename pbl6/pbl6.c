// Created on 28/09/2022.
// PBL C4
// Grupo N° 30
// Nome: HENRIQUE ALVES
// Nome: GILBERTO NUNES
/*Exercício Único (valor: 10,0 pontos): Escreva um programa na linguagem C que
permita realizar operações sobre o catálogo de produtos de uma loja. No
catálogo, constam os seguintes campos para cada produto:
// Includes necessários */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Headers
bool adicionarProduto(int indice, char descricao[30], int estoque,int categoria);
bool removerProduto(int indice);
bool aumentarEstoque(int codigo, int qtd);
bool diminuirEstoque(int codigo, int qtd);
bool atualizarEstoque(int codigo, int qtd);
void listarProdutos();

// Variáveis e Structs do programa
#define numMaxDeProdutos 10;
#define tamanhoMaxDescricao [30];

enum categoria {
    ELETRODOMESTICO,
    FERRAMENTA,
    VESTUARIO
};

struct produto {
    int codigo;
    char descricaoDoProduto[30];
    int estoque;
    enum categoria categoria;
};

struct produto catalogoDeProdutos[0];

// Funcao para mostrar o menu e retornar a opcao ao método main
// para que o main decida como vai prosseguir de acordo com a opcao
int menu() {
    int opcao = 0;
    while (true) {
        printf("Escolha uma opcao:\n"
               "[1] - Adicionar um produto no catálogo\n"
               "[2] - Remover um produto do catálogo\n"
               "[3] - Aumentar o estoque de um produto\n"
               "[4] - Diminuir o estoque de um produto\n"
               "[5] - Atualizar estoque de um produto\n"
               "[6] - Listar todos produtos\n"
               "[7] - Sair do programa\n"
               "Opcao>: \n");
        fflush(stdin);
        scanf("%d", &opcao);
        fflush(stdin);
        if ((opcao >= 1) && (opcao <= 7)) {
            return opcao;
        } else {
            printf("\nOpcao invalida!\n");
        }
    }
}

// MAIN
int main(void) {
    // Variáveis de programa
    bool on = true;
    char descricao[30];
    int qtdEmEstoque, categoria, indice = 0;

    // Laço para manter o programa ligado até o seu encerramento
    while(on) {
        // Mensagem de início
        printf("<CATÁLOGO VIRTUAL DA LOJA>\n");

        // Switch de opções possíveis
        switch (menu())
        {
            case 1:
                printf("Digite a descrição do produto MÁX[30]:\n");
                scanf("%s", &descricao[30]);
                fflush(stdin);

                printf("Digite a quantidade em estoque:\n");
                scanf("%d", &qtdEmEstoque);
                fflush(stdin);

                printf("Digite qual a categoria do produto:\n"
                       "[1] - ELETRODOMESTICO\n"
                       "[2] - FERRAMENTA\n[3] - VESTUARIO\n"
                       "Opcao: ");
                scanf("%d", &categoria);
                fflush(stdin);

                adicionarProduto(indice + 1, descricao, qtdEmEstoque, categoria);
                break;
            case 2:
                printf("Digite o código do produto que deseja remover: \n");
                scanf("%d", &indice);

                removerProduto(indice);
                break;
            case 3:
                printf("Digite o código do produto que deseja adicionar estoque: \n");
                scanf("%d", &indice);
                fflush(stdin);

                printf("Digite a quantidade de estoque que irá adicionar: \n");
                scanf("%d", &qtdEmEstoque);
                fflush(stdin);

                aumentarEstoque(indice, qtdEmEstoque);
                break;
            case 4:
                printf("Digite o código do produto que deseja subtrair do estoque: \n");
                scanf("%d", &indice);
                fflush(stdin);

                printf("Digite a quantidade de estoque que será subtraída: \n");
                scanf("%d", &qtdEmEstoque);

                diminuirEstoque(indice, qtdEmEstoque);
                break;
            case 5:
                printf("Digite o código do produto que deseja atualizar em estoque: \n");
                scanf("%d", &indice);
                fflush(stdin);

                printf("Digite a quantidade em estoque: \n");
                scanf("%d", &qtdEmEstoque);
                fflush(stdin);

                atualizarEstoque(indice, qtdEmEstoque);
                break;
            case 6:
                listarProdutos();
                break;
            case 7:
                on = false;
                break;
        }
    }
    printf("Falha desconhecida na aplicação");
    on = false;
    return 0;
}

int verificaCategoria(int indice, int categoria) {
    if (categoria == 1) {
        return catalogoDeProdutos[indice].categoria = ELETRODOMESTICO;
    } else if (categoria == 2) {
        return catalogoDeProdutos[indice].categoria = FERRAMENTA;
    } else {
        return catalogoDeProdutos[indice].categoria = VESTUARIO;
    }
}

bool adicionarProduto(int indice, char descricao[30], int estoque, int categoria) {
    if (catalogoDeProdutos[indice].codigo = indice,
    strcpy(catalogoDeProdutos[indice].descricaoDoProduto, descricao),
    catalogoDeProdutos[indice].estoque = estoque,
    catalogoDeProdutos[indice].categoria = verificaCategoria(indice, categoria))
    {
        printf("Adição de produto bem sucedida!\n");
        return true;
    }
    printf("A adição de produto falhou!\n");
    return false;
};

bool removerProduto(int indice) {
    if (catalogoDeProdutos[indice].codigo = (int) NULL,
            strcpy(catalogoDeProdutos[indice].descricaoDoProduto, NULL),
        catalogoDeProdutos[indice].estoque = (int) NULL,
        catalogoDeProdutos[indice].categoria = (enum categoria) NULL)
    {
        printf("Remoção de produto bem sucedida\n");
        return true;
    }
    printf("A remoção de produto falhou!\n");
    return false;
};

bool aumentarEstoque(int codigo, int qtd) {
    if (catalogoDeProdutos[codigo].estoque += qtd)
    {
        printf("Adição de estoque bem sucedida!\n");
        return true;
    }
    printf("A adição de estoque falhou!");
    return false;
};

bool diminuirEstoque(int codigo, int qtd) {
    if (catalogoDeProdutos[codigo].estoque -= qtd)
    {
        printf("Remoção de estoque bem sucedida!\n");
        return true;
    }
    printf("A subtração de estoque falhou!");
    return false;
};

bool atualizarEstoque(int codigo, int qtd) {
    catalogoDeProdutos[codigo].estoque = qtd;
    if (catalogoDeProdutos[codigo].estoque)
    {
        printf("Atualização de estoque bem sucedida!\n");
        return true;
    }
    printf("A atualização de estoque falhou!");
    return false;
};

void listarProdutos(){
    int i = 0;
    for (i; i < 10; i++) {
        printf("código do produto: %d\n", catalogoDeProdutos[i].codigo);
        printf("Descrição do produto: %s\n", catalogoDeProdutos[i].descricaoDoProduto);
        printf("Quantidade em estoque: %d\n", catalogoDeProdutos[i].estoque);
        printf("Categoria do produto: %u\n", catalogoDeProdutos[i].categoria);
    }
};
