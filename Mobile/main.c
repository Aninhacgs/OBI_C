#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A,B,C,D,S1,S2;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);

    if(A>=1 && A<= 1000 && B>=1 && B<=1000 && C>=1 && C<=1000 && D>=1 && D<=1000){
        S1 = B+C+D;
        S2 = B+C;
        if(A== S1 && S2 == D && B==C){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
    else{
        printf("N\n");
    }

    return 0;
}
