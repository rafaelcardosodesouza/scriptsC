/*No loop for, a variável i é incrementada de 0 a 19. A cada iteração, a função animacaoPonto() é chamada, 
exibindo a animação de pontos. Portanto, a animação será repetida 20 vezes no total.
Depois que a animação é exibida, o programa termina retornando 0.
Se você executar esse código, verá a animação dos pontos repetida 20 vezes, com um intervalo de 0,5 segundos entre cada iteração.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Inclui a biblioteca Windows para usar a função Sleep()

void limpaTela() {
    system("cls"); // Limpa a tela do console (funciona no Windows) no linux é clear
}

void animacaoPonto() {
    int i, j;
    limpaTela(); //invoca a subrotina para apagar a tela

    for (i = 1; i <= 5; i++) { //vai repetir por 5 vezes o loop adcionando um ponto a mais
        for (j = 0; j < i; j++) {
            printf(".");
        }

        fflush(stdout); // Limpa o buffer de saída
        Sleep(500); // Aguarda 500 milissegundos (0,5 segundos)
        limpaTela();
    }
}

int main(){
    for(int i = 0; i < 20; i++) {
        animacaoPonto(); // Chama a função animacaoPonto() 20 vezes
    }
    
    return 0;
}
