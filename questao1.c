#include <stdio.h>
#include <string.h>


int main(void){

    char nome1[30], nome2[30], resposta;
    int i;

    do{

        i = 0;

        printf("Informe seu nome completo: ");
        gets(nome1);
        printf("Informe seu nome completo: ");
        gets(nome2);


        for(i = 0; nome1[i] != 0; i++){
            nome1[i] = toupper(nome1[i]);
        }
        for(i = 0; nome2[i] != 0; i++){
            nome2[i] = tolower(nome2[i]);
        }

        printf("\n%s\n", nome1);
        printf("\t%s\n", nome2);

        printf("\nDeseja repetir(S ou N)?: ");
        scanf("%c", &resposta);
        fflush(stdin);

    }while(resposta != 'N' && resposta != 'n' );

    return 0;
}