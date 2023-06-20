//DESAFIO - AULA 10
//Crie um programa de gerenciamento de estoque/carrinho de compras (E-commerce)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto{
  int cod;
  char descricao[100];
  float valor;
  int estoque;

};

struct carrinho{
  int cod_carrinho ;
  char descricao;
  int qtd_itens;
  float total; 
};

int menu_produto(){
  
}
int menu_entrada_estoque(){
  char op = 0;  
  printf("Estoque:\n");
  do{
    printf("1 - Listar produtos cadastrados:\n");
    printf("2 - Entrada no estoque:\n");
    printf("10 - voltar \n");
    indicador();
    scanf("%d",&op);
    switch(op){
      case 1:
        printf("\n");
       listar_produtos();
       break;
      case 2:
        printf("\n");
        entrada_estoque();
        break;
      case 10:
        printf("\n");
        printf("retornando ao menu\n");
        main();
        break;
      default: 
        printf("\n");
        printf("opção invalida\n");
        break;
      
    }
    printf("\n");
  } while (op !=10);

}
int carrinho(){
  int op;
  do{
      printf("CARRINHO:\n");
    printf("\n");
    printf("1 - Adcionar Produto: \n");
    printf("2 - Finalizar compra: \n");
    printf("10 - Voltar\n");
    indicador();
    scanf("%d", &op);
    switch(op) {
      case 1:
      
        break;
      case 2: 

        break;
      case 10: 
        printf("\n");
        printf("retornando ao menu\n");
        main();
        break;
      default: 
        printf("\n");
        printf("opção invalida\n");
        break;
    }


    
  } while(op =10);
}

int listar_produtos(){
  
}
int entrada_estoque(){
  
}

int indicador(){
  printf("\n");
    printf("┃\n");
    printf("┗> ");
}

int main() {
  int op;
  printf("Bem vindo ao gerenciamente de seu carrinho\n");
  do{
  printf("MENU:\n");
    printf("1 - Cadastrar Produto.\n");
    printf("2 - Entrada no estoque por produto.\n");
    printf("3 - Venda de produto.\n");
    printf("10 - sair.\n");
    indicador();
    scanf("%d", &op);
    switch (op) {
      case 1:
        menu_produto();
        break;
      case 2:
        menu_entrada_estoque();
        break;
      case 3 :
        carrinho();
        break;
      case 10 :
        printf("Saindo do sistema de Gerenciamento\n");
        break;
      default: 
        printf("opção invalida\n");
        break;
    }
    
    printf("\n");
  } while(op != 10);


  
  return 0;
}
