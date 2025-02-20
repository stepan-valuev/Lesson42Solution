#include "logic.h"


string get_raws_with_zero_value(int matrix[N][N]) {
	string result = "";

	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (matrix[j][i] == 0) {
				result += to_string(j + 1) + " ";
				break;
			}
		}
	}

	return result;
}
