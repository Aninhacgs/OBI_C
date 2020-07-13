#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,A,i,soma;
    soma = 0;

    scanf("%d",&N);
    if(N>=1 && N<=1000){
        for(i=1;i<=N;i++){
            scanf("%d",&A);
            if(A>0 && A<=1000000){
                soma += A;
                if(soma>=1000000){
                    break;
                }
            }
        }

        printf("%d\n",i);
    }


    return 0;
}
