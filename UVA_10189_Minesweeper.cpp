#include <stdio.h>

int main()
{
  int n, m, i, j, a, b, grid[150][150], t;
	char ch;
	scanf("%d %d",&n,&m);
	for(i=0; i<110; i++)
		for(j=0; j<110; j++)
			grid[i][j] = 0;
	scanf("%c",&ch);
	t = 0;
	while(n!=0 && m!=0)
	{
		t++;
		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				scanf("%c",&ch);
				if(ch == '*')
				{
					grid[i][j] = -1;
					for(a=-1; a<=1; a++)
					{
						for(b=-1; b<=1; b++)
						{
							if((i+a)>=0 && (i+a)<n && (j+b)>=0 && (j+b)<m)
							{
								if(a!=0 || b!=0)
								{
									if(grid[i+a][j+b] != -1)
										grid[i+a][j+b] ++;
									//printf("%d %d\n",i+a,j+b);
								}
							}
						}
					}
				}
			}
			scanf("%c",&ch);
		}
		printf("Field #%d:\n", t);
		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				if(grid[i][j] == -1)
					printf("*");
				else
					printf("%d", grid[i][j]);
			}
			printf("\n");
		}
		scanf("%d %d",&n,&m);
		scanf("%c",&ch);
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				grid[i][j] = 0;	
		if(n!=0 && m!=0)
			printf("\n");
	}
	return 0;
}
