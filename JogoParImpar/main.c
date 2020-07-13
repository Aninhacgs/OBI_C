#include <stdio.h>
#include <stdlib.h>

/*
                                                      Jogo de par ou �mpar
Dois amigos, Alice e Bob, est�o jogando um jogo muito simples, em que um deles grita ou "par" ou "�mpar" e o outro imediatamente
responde ao contr�rio, respectivamente "�mpar" ou "par". Em seguida, ambos exibem ao mesmo tempo uma m�o cada um, em que alguns
dedos est�o estendidos e outros dobrados. Ent�o eles contam o n�mero total de dedos estendidos. Se a soma for par, quem gritou
"par" ganha. Se a soma for �mpar, quem gritou "�mpar" ganha. Por exemplo, suponhamos que a Alice gritou "par" e o Bob respondeu
"�mpar". Em seguida, Alice n�o deixou nenhum dos seus dedos estendidos, ao passo que Bob deixou tr�s dedos estendidos. A soma
ent�o � tr�s, que � �mpar, portanto Bob ganhou. Seu programa deve determinar quem ganhou, tendo a informa��o de quem gritou par e
o n�mero de dedos estendidos de cada um.

Entrada
A entrada cont�m tr�s linhas, cada uma com um n�mero inteiro, P, D_1 e D_2, nesta ordem. Se P = 0 ent�o Alice gritou "par", ao
passo que se P=1 ent�o Bob gritou "par". Os n�meros D_1 e D_2 indicam, respectivamente, o n�mero de dedos estendidos da Alice e
do Bob.

Sa�da
Seu programa dever� imprimir uma �nica linha, contendo um �nico n�mero inteiro, que deve ser 0 se Alice foi a ganhadora, ou 1 se
Bob foi o ganhador.


*/

int main()
{
    int P, D_1,D_2,soma;


    scanf("%d",&P);
    scanf("%d",&D_1);
    scanf("%d",&D_2);


    if(P == 0 || P == 1){
        soma = D_1 + D_2;

        if(P== 0 && soma%2 == 0){
            printf("0\n");
        }
        else if(P==1 && soma%2 == 0){
            printf("1\n");
        }

        else if(P==1 && soma%2!=0){
            printf("0\n");
        }
        else if(P==0 && soma%2!=0){
            printf("1\n");
        }
    }


    return 0;
}
