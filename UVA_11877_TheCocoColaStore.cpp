#include <stdio.h>

int main()
{
  int N[101], x, i, temp;
	N[0] = 0;
	N[1] = 0;
	N[2] = 1;
	for(i=3; i<101; i++)
	{
		int remain = i / 3 + i % 3;
		N[i] = (i/3) + N[remain]; 
		//printf("%d %d\n", i, N[i]);
	}
	scanf("%d",&x);
	while(x != 0)
	{
		printf("%d\n", N[x]);
		scanf("%d",&x);	
	}
	return 0;
}
