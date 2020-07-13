#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,P,Q,aux;
    char C;

    scanf("%d",&N);
    scanf("%d",&P);
    fflush(stdin);
    scanf("%c",&C);
    scanf("%d",&Q);

    if(N>= 1 && N<=500000 && P>=0 && P<=100 && Q>=0 && Q<=1000){
        if(C == '+'){
            aux = P + Q;
        }

        else if(C == '*'){
            aux = P * Q;
        }


        if(aux<=N){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }

    }



    return 0;
}
