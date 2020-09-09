#define N 4
#include <iostream>
#include "solveNQ.h"
#include "solveNQUtil.h"
#include "printSolution.h"
bool solveNQ()
{
   int board[N][N]={{0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0}};
   if (solveNQUtil (board,0)==false) {
      printf("Solution does not exist");
      return false;
   }
   printSolution(board);
   return true;
}
