#include<stdio.h>
#include<stdlib.h>

#define n 3

void decomposicaoLU(float A[][n], float L[][n], float U[][n]);
void triangular_inferior(float L[][n], float *y, float *b);
void triagular_superior(float U[][n], float *x, float *y);

int main()
{
  float A[n][n] = {3,2,4,1,1,2,4,3,-2},
        x[n], y[n],
        b[n] = {1,2,3},
        L[n][n], U[n][n];

  int i;

  decomposicaoLU(A, L, U);
  triangular_inferior(L, y, b);
  triagular_superior(U, x, y);

  printf("\nResultado do sistema:  ");
  for (i = 0; i < n; i++)
  {
    printf("%.2f ", x[i]);
  }

  printf("\n\n");

  return 0;
}

void decomposicaoLU(float A[][n], float L[][n], float U[][n])
{
  int i, j, k;
  float aux;

  for (i = 0; i < n; i++)
  {
    L[i][i] = 1;
    for (j = i; j < n; j++)
    {
      aux = 0;
      for (k = 0; k < i; k++)
      {
        aux += (L[i][k] * U[k][j]);
      }
      U[i][j] = A[i][j] - aux;
    }
    for (j = i + 1; j < n; j++)
    {
      aux = 0;
      for (k = 0; k < i; k++)
      {
        aux += (L[j][k] * U[k][i]);
      }
      L[j][i] = (A[j][i] - aux) / U[i][i];
    }
  }
}

void triangular_inferior(float L[][n], float *y, float *b)
{
	int i, j;
  float aux = 0;

  printf("\nTriangular Inferior:  \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			aux = aux + L[i][j] * y[j];
		}
		y[i] = (b[i] - aux) / L[i][i];
		printf("y_%i = %.2f\n", i, y[i]);
		aux = 0;
	}
}

void triagular_superior(float U[][n], float *x, float *y)
{
	int i, j;
  float aux = 0;

  printf("\nTriangular Superior:  \n");
	for (i = n - 1; i >= 0; i--)
	{
		for (j = i + 1; j < n; j++)
		{
			aux = aux + U[i][j] * x[j];
		}
		x[i] = (y[i] - aux) / U[i][i];
		printf("x_%i = %.2f\n", i, x[i]);
		aux = 0;
	}
}
