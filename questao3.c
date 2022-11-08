#include <stdio.h>
#include <string.h>


int main(void){

    char fName[50], lName[50];

    for(int i = 0; i <5; i++){
        printf("Nome da pessoa %d: ", i+1);
        fgets(fName, 50, stdin);

        printf("Sobrenome da pessoa %d: ", i+1);
        fgets(lName, 50, stdin);
    }

        printf("Tamano do nome: %d caracteres.\n", strlen(fName)-1);
        printf("Tamano do sobrenome: %d caracteres.\n", strlen(lName)-1);
        strcat(fName, lName);
        printf("Nome completo: ");
        puts(fName);


    return 0;
}