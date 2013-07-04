#include <stdio.h>

int main()
{
  int right, N, i, j, count;
	scanf("%d",&N);
	right = 0;
	count = 0;
	for(i=N; i>1; i--)
	{
		for(j=0; j<i-1; j++)
		{
			count += right;
			count ++;
		}
		right ++;
	}
	count += N;
	printf("%d\n", count);
}
