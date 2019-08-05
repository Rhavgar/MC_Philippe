#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int a_add(int mat[][SIZE], int lin, int col);
int b_add(int mat[][SIZE], int lin, int col);
int c_add(int mat[][SIZE], int lin, int col);
int d_add(int mat[][SIZE], int lin, int col);
int e_add(int mat[][SIZE], int lin, int col);
int f_add(int mat[][SIZE], int lin, int col);
int g_add(int mat[][SIZE], int lin, int col);

int main()
{

	int mat[SIZE][SIZE]={0,2,8,1,7,1,5,8,2,2,3,4,0,8,1,9,1,2,7,2,3,0,1,0,4};

	printf("A) Somatorio=%d\n", a_add(mat, SIZE, SIZE));
	printf("B) Somatorio=%d\n", b_add(mat, SIZE, SIZE));
	printf("C) Somatorio=%d\n", c_add(mat, SIZE, SIZE));
	printf("D) Somatorio=%d\n", d_add(mat, SIZE, SIZE));
	printf("E) Somatorio=%d\n", e_add(mat, SIZE, SIZE));
	printf("F) Somatorio=%d\n", f_add(mat, SIZE, SIZE));
	printf("G) Somatorio=%d\n", g_add(mat, SIZE, SIZE));

	return 0;
}

int a_add(int mat[][SIZE], int lin, int col)
{

	int i, j, s=0;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			s+=mat[i][j];
		}
	}

	return s;
}

int b_add(int mat[][SIZE], int lin, int col)
{

	int i, j, s=0;

	for(j=0; j<SIZE; j++)
	{
		for(i=0; i<SIZE; i++)
		{
			s+=mat[i][j];
		}
	}

	return s;
}

int c_add(int mat[][SIZE], int lin, int col)
{

	int i, j, s=0;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			if(i!=j)
			{
				s+=mat[i][j];
			}
		}
	}

	return s;
}

int d_add(int mat[][SIZE], int lin, int col)
{

	int i, j, s=0;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			if(i==j)
			{
				s+=mat[i][j];
			}
		}
	}

	return s;
}

int e_add(int mat[][SIZE], int lin, int col)
{

	int i, j, s=0;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			if(i<j)
			{
				s+=mat[i][j];
			}
		}
	}

	return s;
}

int f_add(int mat[][SIZE], int lin, int col)
{

	int i, j, s=0;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			if(i>j)
			{
				s+=mat[i][j];
			}
		}
	}

	return s;
}

int g_add(int mat[][SIZE], int lin, int col)
{

	int i, j, aux[SIZE][SIZE], s=0;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			aux[i][j]=mat[i][j]*mat[j][i];

			if(i<j)
			{
				s+=aux[i][j];
			}
		}
	}

	return s;
}
