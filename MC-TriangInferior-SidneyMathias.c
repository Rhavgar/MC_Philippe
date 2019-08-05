#include<stdio.h>
#include<stdlib.h>

#define n 3
#define m 3

void triangular_inferior(int L[n][m], int x[n], int b[n]);

int main()
{
	int L[n][m] = {2,0,0,1,4,0,1,1,1}, x[n], b[n] = {2,-3,1};

	triangular_inferior(L, x, b);

	return 0;
}

void triangular_inferior(int L[n][m], int x[n], int b[n])
{
	int i, j, aux = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			aux = aux + L[i][j] * x[j];
		}
		x[i] = (b[i] - aux) / L[i][i];
		printf("x_%i = %i\n", i, x[i]);
		aux = 0;
	}
}
