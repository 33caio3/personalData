#include <stdlib.h>
#include <string.h>
#include <stdio.h>

 struct pessoa{
    char nome[50];
    char data[20];
    char cpf[50];
};

void preenche(struct pessoa *ptr);
void imprime(struct pessoa *ptr);

int main(){
    struct pessoa *ptr;
    struct pessoa pessoa[1];
    preenche(pessoa);
    imprime(pessoa);
    return 0;
}


void preenche(struct pessoa *ptr){
    printf("Digite seu nome\n");
    scanf("%[^\n]", ptr->nome);
    printf("Digite a data em que nasceu, no formato 'xx/xx/xxxx'\n");
    scanf("%*[^\n]"); scanf("%*c");
    scanf("%[^\n]", ptr->data);
    printf("Digite seu CPF\n");
    scanf("%*[^\n]"); scanf("%*c");
    scanf("%[^\n]", ptr->cpf);
}

void imprime(struct pessoa *ptr){
    printf("Seu nome e %s\n", ptr->nome);
    printf("Voce nasceu em %s\n", ptr->data);
    printf("Seu CPF e %s\n", ptr->cpf);
}
