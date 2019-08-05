#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calc_print(int mat_a[4][4], int mat_b[4][3], int mat_c[4][3]);

int main()
{
	int mat_a[4][4], mat_b[4][3], mat_c[4][3];
	calc_print(mat_a, mat_b, mat_c);

	return 0;
}

void calc_print(int mat_a[4][4], int mat_b[4][3], int mat_c[4][3])
{
	int i, j, k;

	srand(time(NULL));

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			mat_a[i][j]=rand()%10+1;
		}
	}

	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			mat_b[i][j]=rand()%10+1;
		}
	}

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			mat_c[i][j]=0;
			for(k=0; k<4; k++)
			{
				mat_c[i][j]=mat_c[i][j]+(mat_a[i][k]*mat_b[k][j]);
			}
		}
	}

	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i | ", mat_c[i][j]);
		}
	}
}
