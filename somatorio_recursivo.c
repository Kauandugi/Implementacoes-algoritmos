#include <stdio.h>
#include <locale.h>

int soma(int a){

    if(a==0)
        return 0;
    else
        return a + soma(a-1);

}

int main(){
    setlocale(LC_ALL, "");
    char controle;
    int num=0;

    do{//Menu principal
        printf("Digite um número para calcular o somatório até 1:\n");
        scanf("%d", &num);
        printf("\nSomatória de %d até 1: %d", num, soma(num));
        printf("\n------------------------");

pergunta:
        //printf("\n\n===================================");
        printf("\n\nDeseja verificar outro número? s/n\n");
        scanf(" %c", &controle);
        getc(stdin);
        fflush(stdin);

        if(controle=='N' || controle=='n'){
            break;
        }
        else if(controle!='S' && controle!='s'){
            printf("\nCaractere inválido\n");
            goto pergunta; //retorna a perguntar ao usuário novamente
        }

    }while (1);

    printf("\nObrigado...");

    return 0;
}