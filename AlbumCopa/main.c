#include <stdio.h>
#include <stdlib.h>
#define TAM 101

int ContaFigurinhas(int vet[],int cont,int x);

int main()
{
    int N,M,X;
    int vet[TAM],cont,aux1,resp,aux2;

    aux1 = 0;
    aux2 = 0;
    cont = 0;

    scanf("%d",&M);
    scanf("%d",&N);
    while(cont < M){
        scanf("%d",&X);
        vet[cont] = X;
        resp = ContaFigurinhas(vet,cont,X);
        if(resp == 0){
            aux1++;
        }
        else{
            aux2++;
        }

        cont++;
    }

    printf("%d\n%d\n",aux1,aux2);


    return 0;

}

int ContaFigurinhas(int vet[],int cont,int x){
    int i,aux;
    aux = 0;
    for(i=0;i<cont;i++){
        if(x == vet[i]){
            aux = 1;
            break;
        }
    }

    return aux;
}




