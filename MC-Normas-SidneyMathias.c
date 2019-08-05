#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int norma_col(int mat[3][3]);
int norma_lin(int mat[3][3]);
double norma_euc(int mat[3][3]);

int main()
{
	int mat[3][3]={ 3, 2, 5,
					1, 1, 2,
					4, 3, -2};

	printf("Norma Coluna: %i\n", norma_col(mat));
	printf("Norma Linha: %i\n", norma_lin(mat));
	printf("Norma Euclideana: %.2f\n", norma_euc(mat));

	return 0;
}

int norma_col(int mat[3][3])
{
	int i, j, aux=0, modulo=0, max=0;

	for(j=0; j<3; j++)
	{
		for(i=0; i<3; i++)
		{
			if(mat[i][j]<0)
			{
				modulo=mat[i][j]*(-1);
				aux+=modulo;
			}
			else
			{
				aux+=mat[i][j];
			}


		}
		if(aux>max)
		{
			max=aux;
		}
		aux=0;
	}

	return max;
}

int norma_lin(int mat[3][3])
{
	int i, j, aux=0, modulo=0, max=0;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(mat[i][j]<0)
			{
				modulo=mat[i][j]*(-1);
				aux+=modulo;
			}
			else
			{
				aux+=mat[i][j];
			}


		}
		if(aux>max)
		{
			max=aux;
		}
		aux=0;
	}

	return max;
}

double norma_euc(int mat[3][3])
{
	int i, j, euclideana=0;
	double aux=0.0;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			aux+=pow(mat[i][j], 2);
		}
	}

	return sqrt(aux);
}
