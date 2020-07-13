#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,P,X,Y,soma,cont,qtd;

    cont = 0;
    qtd = 0;

    scanf("%d %d",&N,&P);

    if(N>= 1 && N<=1000 && P>=1 && P<=1000){
        while(cont<N){
            scanf("%d %d",&X,&Y);
            if(X>= 0 && X<=400 && Y>=0 && Y<=400){
                soma = X + Y;
            }

            if(soma>=P){
                qtd++;
            }

            cont++;
        }

        printf("%d\n",qtd);
    }

    return 0;
}
