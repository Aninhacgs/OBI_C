#include <stdio.h>
#include <stdlib.h>
#define TAM 81
int main()
{
    char Gabarito[TAM],Cartao[TAM],V[2];
    int N,acertos,cont,i;

    acertos = 0;
    cont = 0;

    scanf("%d",&N);

    if(N>=1 && N<=80){
       while(cont<N){
        scanf("%c",&V[0]);
        if(V[0] == 'A' || V[0]=='B' || V[0] == 'C' || V[0]=='D' || V[0]=='E'){
            Gabarito[cont] = V[0];
            cont++;
        }
       }

       cont = 0;

       while(cont<N){
        scanf("%c",&V[0]);
        if(V[0] == 'A' || V[0]=='B' || V[0] == 'C' || V[0]=='D' || V[0]=='E'){
            Cartao[cont] = V[0];
            cont++;
        }
       }


       for(i=0;i<N;i++){
        if(Cartao[i] == Gabarito[i]){
            acertos++;
        }
       }


       printf("%d\n",acertos);

    }



    return 0;
}
