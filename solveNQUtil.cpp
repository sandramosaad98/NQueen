#include "solveNQUtil.h"
#include "isSafe.h"

bool solveNQUtil( int board[N][N], int column)
{
	if(column >= N)
		return true;
	for( int i = 0 ; i < N; i++)
	{
		if(isSafe(board, i, column)
		{
			board[i][column] = 1;
			if ( solveNQUtil(board, column + 1))
				return true;
			board[i][column] =0;
		}
	}
	return false; 
}
