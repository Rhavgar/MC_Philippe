#include <stdio.h>
#include <stdlib.h>

#define SIZE SIZE

int letra_h(int mat[][SIZE], int x);
void letra_i(int mat[][SIZE], int vet);
void letra_j(int mat[][SIZE], int vet);

int main()
{
	int mat[SIZE][SIZE]={0,2,8,1,7,1,5,8,2,2,3,4,0,8,1,9,1,2,7,2,3,0,1,0,4};
	int x;
	int V[SIZE], P[SIZE];

	printf("h) Entre com um numero(x):\n");
	scanf("%i", &x);
	printf("Resultado: %i\n", letra_h(mat, x));
	letra_i(mat, V);
	letra_j(mat, P);

	return 0;
}

int letra_h(int mat[][SIZE], int x)
{
	int i, j, aux=0;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			aux+=x*mat[i][j];
		}
	}

	return aux;
}

void letra_i(int mat[][SIZE], int vet)
{
	int i, j, aux=0;

	for(j=0; j<SIZE; j++)
	{
		for(i=0; i<SIZE; i++)
		{
			aux+=mat[i][j];
		}
		vet[j]=aux;
		aux=0;
	}

	printf("\ni) Vetor V:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%i ", vet[i]);
	}

}

void letra_j(int mat[][SIZE], int vet)
{
	int i, j, aux=1;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			aux*=mat[i][j];
		}
		vet[i]=aux;
		aux=1;
	}

	printf("\n\nj) Vetor P:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%i ", vet[i]);
	}
}
