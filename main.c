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

//Executa a op��o escolhida no menu
void menu_selecionar(int op){
    switch(op){
        case 1:
            lista_inserir(lista);
            break;
        case 2:
            lista_rremover(lista);
            break;
    }
}

//Insere um item no final da lista
void list_inserir(ptr_no lista){
    while(lista->proximo != NULL){
        lista = lista->proximo;
    }
    lista->proximo = (ptr_no) malloc(sizeof(no));
    lista = lista->proximo;
    lista->dado = rand()%100;
    lista->proximo = NULL;
}

//Remove um elemento da lista
void lista_remove(ptr_no lista){
    int dado;
    ptr_no atual;
    atual = (ptr_no) malloc(sizeof(no));
    printf("\n\nEscolha um dos itens:\n");
    scanf("%d", &dados);
    while((lista->dado != dado)){
        if(lista->proximo == NULL){
            break;
        }
        atual = lista;
        lista = lista->proximo;
    }
    if(lista->dado == dado){
        atual->proximo = lista->proximo;
    }
}
