#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C,P,F,aux;

    scanf("%d",&C);
    scanf("%d",&P);
    scanf("%d",&F);

    if(C>=1 && C<=1000 && P>=1 && P<=1000 && F>=1 && F<=1000){
        aux = P / F;

        if(aux>=C){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}
