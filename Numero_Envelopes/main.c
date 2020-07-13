#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,menor,tipos;

    i = 0;

    scanf("%d",&N);

    if(N>=1 && N<=1000){
        while(i<N){
           if(i == 0){
                scanf("%d",&tipos);
                menor = tipos;
            }

            else{
                scanf("%d",&tipos);
                if(tipos<menor){
                    menor = tipos;
                }
            }

            i++;
        }

        printf("%d\n",menor);

    }

    return 0;
}
