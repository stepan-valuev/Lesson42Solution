#include "logic.h"

int count_zero_elements(int matrix[N][N]) {
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] == 0) {
				count++;
			}
		}
	}

	return count;
}
