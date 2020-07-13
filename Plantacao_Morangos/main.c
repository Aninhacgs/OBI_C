#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C1,C2,L1,L2,A1,A2;


    scanf("%d",&C1);
    scanf("%d",&L1);
    scanf("%d",&C2);
    scanf("%d",&L2);

    if(C1>=1 && C1<=100 && C2>=1 && C2<=100 && L1>=1 && L1<=100 && L2>=1 && L2<=100){
        A1 = C1 * L1;
        A2 = C2 * L2;

        if(A1>A2){
            printf("%d\n",A1);
        }
        else{
            printf("%d\n",A2);
        }
    }


    return 0;
}
