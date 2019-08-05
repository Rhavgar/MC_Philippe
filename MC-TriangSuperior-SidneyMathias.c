#include<stdio.h>
#include<stdlib.h>

#define n 3
#define m 3

void triagular_superior(int U[n][m], int x[n], int b[n]);

int main()
{
	int U[n][m] = {3,1,0,0,2,-1,0,0,3}, x[n], b[n] = {4,2,0};

	triagular_superior(U, x, b);

	return 0;
}

void triagular_superior(int U[n][m], int x[n], int b[n])
{
	int i, j, aux = 0;

	for (i = n - 1; i >= 0; i--)
	{
		for (j = i + 1; j < n; j++)
		{
			aux = aux + U[i][j] * x[j];
		}
		x[i] = (b[i] - aux) / U[i][i];
		printf("x_%i = %i\n", i, x[i]);
		aux = 0;
	}
}
