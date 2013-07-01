#include <stdio.h>

int main()
{
  int testN, X, length, antsN, minMax, max, mid;
	scanf("%d",&testN);
	while(testN--)
	{
		minMax = -1;
		max = -1;
		scanf("%d %d",&length,&antsN);
		mid = length/2;
		while(antsN--)
		{
			scanf("%d",&X);
			if(length - X > max)
			{
				max = length - X;
			}
			if(X > max)
			{
				max = X;
			}
			if(X > mid && length - X > minMax)
			{
				minMax = length - X;
			}
			if(X <= mid && X > minMax)
			{
				minMax = X;
			}
		}
		printf("%d %d\n", minMax, max);
	}
}
