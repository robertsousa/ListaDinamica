#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Definindo a estrutura da lista
struct no{
    int dado;
    struct no *proximo;
};

//Definindo variaveis
typedef no *ptr_no;
prt_no lista;
int op;

//Prototipa��o
void menu_mostra();
void menu_selecionar(int op);
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);
void lista_mostrar(ptr_nno lista);

int main()
{
    printf("Hello world!\n");
    return 0;
}

//Mostra o menu das op�oes
void menu_mostrar(){
    lista_mostrar(lista);
    printf("\n\nEscolha uma das op��es: \n");
    printf("1 - Inserir no final da lista\n");
    printf("2 - Remover um item da lista\n");
    printf("0 - Sair\n\n");
}

