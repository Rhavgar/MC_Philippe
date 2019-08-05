#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define SIZE 10

void gerar(int matA[][SIZE]);
int diag_dom(int matA[][SIZE]);

int main()
{
	int matA[SIZE][SIZE];
	int ver, i, j;

	gerar(matA);
	ver=diag_dom(matA);

	if(ver==1)
	{
		printf("A matriz é diagonalmente dominante.");
	} else
	{
		printf("A matriz não é diagonalmente dominante.");
	}

	return 0;
}

void gerar(int matA[][SIZE])
{
	int i, j;

	srand(time(NULL));
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			matA[i][j]=rand()%10+1;
		}
	}

}

int diag_dom(int matA[][SIZE])
{
	int i, j, aux=0, ver=1;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			if(i!=j)
			{
				aux+=matA[i][j];
			}
		}
		if(abs(matA[i][i]>=aux))
		{} else
		{
			ver=0;
		}
	}

	return ver;
}
