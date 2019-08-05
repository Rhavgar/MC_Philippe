#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gerar(int matA[5][5], int matB[5][5]);
void multi(int matA[5][5], int matB[5][5], int matC[5][5]);
int verif(int matC[5][5], int matD[5][5]);

int main()
{
	int matA[5][5], matB[5][5], matC[5][5];
	int matD[5][5]={1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1};
	int v=0;

	gerar(matA, matB);
	multi(matA, matB, matC);
	v=verif(matC, matD);

	if(v==0)
	{
		printf("B e inversa de A\n");
	} else
	{
		printf("B nao e inversa de A\n");
	}

	return 0;
}

void gerar(int matA[5][5], int matB[5][5])
{
	int i, j;

	srand(time(NULL));
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			matA[5][5]=rand()%10+1;
			matB[5][5]=rand()%10+1;
		}
	}
}

void multi(int matA[5][5], int matB[5][5], int matC[5][5])
{
	int i, j, k;

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			matC[i][j]=0;
			for(k=0; k<5; k++)
			{
				matC[i][j]=matC[i][j]+(matA[i][k]*matB[k][j]);
			}
		}
	}
}

int verif(int matC[5][5], int matD[5][5])
{
	int i, j, v=0;

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(matC[i][j]==matD[i][j])
				{}
			else
			{
				v++;
			}
		}
	}

	return v;
}
