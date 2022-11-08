#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char texto[100];
    int i, wordCount=1;


    printf("Insira o texto: ");
    fgets(texto, sizeof(texto), stdin);


    for(i=0; texto[i]!='\0'; i++)
	{
		
		if(i==0)
		{
			if((texto[i]>='a' && texto[i]<='z'))
				texto[i]=texto[i]-32; 
			continue; 
		}
		if(texto[i]==' ')
		{
		
			++i;
			texto;
            wordCount++;
			if(texto[i]>='a' && texto[i]<='z')
			{
				texto[i]=texto[i]-32; 
				continue; 
			}
		}
		else
		{
			
			if(texto[i]>='A' && texto[i]<='Z')
				texto[i]=texto[i]+32; 
		}
	}

    printf("\n%s", texto);
    printf("O texto possui %d palavras.\n", wordCount);



    return 0;
}