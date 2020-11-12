// C code for Maximum size square 
// sub-matrix with all 1s 
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int min(int left, int up, int upleft)
{
	int temp;

	temp = left;
	if (temp > up)
		temp = up;
	if (temp > upleft)
		temp = upleft;
	return (temp);
}

void printMaxSubSquare(char **map, int size[2], char legend[3])
{
int i,j;
int **sizemtrx;
int max_of_s, max_i, max_j;

sizemtrx = (int**)malloc(sizeof(int*) * size[0]);
i = 0;
while(i < size[0])
	sizemtrx[i++] = (int*)malloc(sizeof(int) * size[1]);
/* Set first column of sizemtrx[][]*/
for(i = 0; i < size[0]; i++)
	sizemtrx[i][0] = (map[i][0] == legend[0] ? 1 : 0);
/* Set first row of sizemtrx[][]*/	
for(j = 0; j < size[1]; j++)
	sizemtrx[0][j] = (map[0][j] == legend[0] ? 1 : 0);

/* Construct other entries of S[][]*/
for(i = 1; i < size[0]; i++)
{
	for(j = 1; j < size[1]; j++)
	{
	if(map[i][j] == legend[0])
		sizemtrx[i][j] = min(sizemtrx[i][j-1], sizemtrx[i-1][j],
						sizemtrx[i-1][j-1]) + 1;
	else
		sizemtrx[i][j] = 0;
	}
}

/* Find the maximum entry, and indexes of maximum entry 
	in sizemtrx[][] */
max_of_s = sizemtrx[0][0]; max_i = 0; max_j = 0;
for(i = 0; i < size[0]; i++)
{
	for(j = 0; j < size[1]; j++)
	{
	if(max_of_s < sizemtrx[i][j])
	{
		max_of_s = sizemtrx[i][j];
		max_i = i;
		max_j = j;
	}
	}
}
 
for(i = max_i; i > max_i - max_of_s; i--)
{
	for(j = max_j; j > max_j - max_of_s; j--)
	{
		map[i][j] = legend[2];
	}
}

for(i = 0; i < size[0]; i++)
{
	for(j = 0; j < size[1]; j++)
	{
		write(1, &map[i][j], 1);
	} 
	write(1, "\n", 1);
}
	write(1, "\n", 1);
}


/* Driver function to test above functions */
int main()
{
	int		size[2] = {100, 100};
	char	**map;
	int		i;

map = (char**)malloc(sizeof(char*) * size[0]);
char	legend[3] = {'.', 48, '*'};
i = 0;
while(i < size[0])
	map[i++] = (char*)malloc(sizeof(char) * size[1]);
srand(time(0));
for (i = 0; i < size[0]; i++)
{
	for (int j = 0; j < size[1]; j++)
	{
		if (((rand() % size[0]) * 2) < 30)
    			map[i][j] = legend[1];
		else
			map[i][j] = legend[0];
	}
}
printMaxSubSquare(map, size, legend);
}
