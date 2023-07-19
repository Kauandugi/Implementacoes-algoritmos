#include <stdio.h>
#include <locale.h>

int fibonacci(int num){
if(num==0 || num ==1){
    return num;
}

return fibonacci(num-1) + fibonacci(num-2);
}

int main(){
    setlocale(LC_ALL, "");

    char controle;
    int num;

    do{//Menu principal
        printf("Digite um número para a sequência de Fibonacci\n");
        scanf("%d", &num);
        printf("\n\n===================================");
        printf("\nA sequência de Fibonacci de %d é %d", num, fibonacci(num));
        printf("\n===================================\n");

        printf("\nDeseja verificar outro número? s/n\n");
        scanf(" %c", &controle);
        getc(stdin);

        if(controle=='N' || controle=='n'){
            break;
        }
        else if(controle!='S' && controle!='s'){
            printf("\nCaractere inválido\n");
        }

    }while (1);

    printf("\nObrigado...");
    

    return 0;
}