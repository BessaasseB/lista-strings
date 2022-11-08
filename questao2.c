#include <stdio.h>
#include <string.h>

int main(void){

    char nome1[20], nome2[20], nome3[20], nome4[20], nome5[20];

    printf("Informe o nome da primeira ferramenta: ");
    gets(nome1);
    printf("Informe o nome da segunda ferramenta: ");
    gets(nome2);
    printf("Informe o nome da terceira ferramenta: ");
    gets(nome3);
    printf("Informe o nome da quarta ferramenta: ");
    gets(nome4);
    printf("Informe o nome da quinta ferramenta: ");
    gets(nome5);

    if(strcmp(nome1, nome2) == 0 || strcmp(nome1, nome3) == 0 || strcmp(nome1, nome4) == 0 || strcmp(nome1, nome5) == 0 ){
        printf("O nome %s esta repetido", nome1);
        return 0;
    }
    if(strcmp(nome2, nome3) == 0 || strcmp(nome2, nome4) == 0 || strcmp(nome2, nome5) == 0 ){
        printf("O nome %s esta repetido", nome2);
        return 0;
    }
    if(strcmp(nome3, nome4) == 0 || strcmp(nome3, nome5) == 0 ){
        printf("O nome %s esta repetido", nome3);
        return 0;
    }
    if(strcmp(nome4, nome5) == 0 ){
        printf("O nome %s esta repetido", nome4);
        return 0;
    }

    return 0;

}