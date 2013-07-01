#include <stdio.h>
#include <math.h>

int main()
{
  int i, I, D, t, ct, j, prev, x, where, now;
	scanf("%d",&t);
	for(ct=0; ct<t; ct++)
	{
		scanf("%d %d", &D, &I);
		now = 1;
		for(i=0; i<D-1; i++)
			now = now*2 + ( (int)( (I-1) / pow(2, i) ) % 2 );
		printf("%d\n", now);
	}
	scanf("%d",&I);
}
