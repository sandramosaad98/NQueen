#include "printSolution.h"
#include <iostream>
#define N 4
void printSolution (int board [N][N])
{
   for (int i=0;i<N;i++) {
      for (int j=0;j<N;j++)
         printf("%d",board[i][j]);
      printf("\n");
   }
}
