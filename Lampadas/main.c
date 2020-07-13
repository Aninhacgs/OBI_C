#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,estado,A,B;

    A = 0;
    B = 0;

    scanf("%d",&N);

    if(N>=1 && N<=100000){
        while(N){
         scanf("%d",&estado);
         if(estado==1){
            if(A==0){
                A = 1;
            }
            else{
                A = 0;
            }
          }
          else if(estado==2){
            if(A==0 && B==0){
                A = 1;
                B = 1;
            }
            else if(A==0 && B==1){
                A = 1;
                B = 0;
            }
            else if(A==1 && B==0){
                A = 0;
                B = 1;
            }
            else if(A==0 && B==1){
                A = 1;
                B = 0;
            }
            else if(A==1 && B == 1){
                A = 0;
                B = 0;
            }
         }

         N--;
     }

     printf("%d\n",A);
     printf("%d\n",B);
  }

    return 0;
}
