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
typedef struct no *ptr_no;
ptr_no lista;
int op;

//Prototipação
void menu_mostrar();
void menu_selecionar(int op);
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);
void lista_mostrar(ptr_no lista);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //inicializando a maquina de numeros randomicos
    op = 1;
    //Criando o primeiro no da lista
    lista = (ptr_no) malloc(sizeof(ptr_no));
    lista->dado = 0;
    lista->proximo = NULL;

    //laço principal
    while(op != 0){
        system("CLS");
        menu_mostrar();
        scanf("%d", &op);
        menu_selecionar(op);
    }
    system("Pause");
    return 0;
}

//Mostra o menu das opçoes
void menu_mostrar(){
    lista_mostrar(lista);
    printf("\n\nEscolha uma das opções: \n");
    printf("1 - Inserir no final da lista\n");
    printf("2 - Remover um item da lista\n");
    printf("0 - Sair\n\n");
}

//Executa a opção escolhida no menu
void menu_selecionar(int op){
    switch(op){
        case 1:
            lista_inserir(lista);
            break;
        case 2:
            lista_remover(lista);
            break;
    }
}

//Insere um item no final da lista
void lista_inserir(ptr_no lista){
    while(lista->proximo != NULL){
        lista = lista->proximo;
    }
    lista->proximo = (ptr_no) malloc(sizeof(ptr_no));
    lista = lista->proximo;
    lista->dado = rand()%100;
    lista->proximo = NULL;
}

//Remove um elemento da lista
void lista_remover(ptr_no lista){
    int dado;
    ptr_no atual;
    atual = (ptr_no) malloc(sizeof(ptr_no));
    printf("\n\nEscolha um dos itens: ");
    scanf("%d", &dado);
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

//Desenha o conteudo da lista na tela
void lista_mostrar(ptr_no lista){
    system("CLS");
    while(1){
        printf("%d, ", lista->dado);
        if(lista->proximo == NULL){
            break;
        }
        lista = lista->proximo;
    }
}

//Desenha o conteudo da lista na tela 2
void lista_mostrar_2(ptr_no lista){
    system("CLS");
    while(lista->proximo != NULL){
        printf("%d, ", lista->dado);
        lista = lista->proximo;
    }
    printf("%d, ", lista->dado);
}
