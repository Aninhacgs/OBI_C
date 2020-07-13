#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *numero,*aux;
    int i,tam;

    numero = malloc(16*sizeof(char));
    aux = malloc(16*sizeof(char));

    fflush(stdin);

    gets(aux);

    numero = strupr(aux);

    tam = strlen(numero);

    for(i=0;i<tam;i++){
        if(numero[i] == 'A' || numero[i] == 'B' || numero[i] == 'C'){
            numero[i] = '2';
        }
        else if(numero[i] == 'D' || numero[i] == 'E' || numero[i] == 'F'){
            numero[i] = '3';
        }
        else if(numero[i] == 'G' || numero[i] == 'H' || numero[i] == 'I'){
            numero[i] = '4';
        }
        else if(numero[i]=='J' || numero[i] == 'K' || numero[i] == 'L'){
            numero[i] = '5';
        }
        else if(numero[i] == 'M' || numero[i] == 'N' || numero[i] == 'O'){
            numero[i] = '6';
        }
        else if(numero[i] == 'P' || numero[i] == 'S' || numero[i] == 'Q' || numero[i] == 'R'){
            numero[i] = '7';
        }
        else if(numero[i] == 'T' || numero[i] == 'U' || numero[i] == 'V'){
            numero[i] = '8';
        }
        else if(numero[i] == 'W' || numero[i] == 'X' || numero[i] == 'Z' || numero[i]== 'Y'){
            numero[i] = '9';
        }
    }


    for(i=0;i<tam;i++){
        if(i!=tam-1){
            printf("%c",numero[i]);
        }
        else{
            printf("%c\n",numero[i]);
        }
    }

    return 0;
}
