#include <stdio.h>

int main()
{
  int tt, s, d, x, y;
	scanf("%d",&tt);
	while(tt--)
	{
		scanf("%d %d",&s,&d);
		if(d > s)
		{
			printf("impossible\n");
			continue;
		}
		if((s+d) % 2 != 0)
		{
			printf("impossible\n");
			continue;
		}
		if((s-d) % 2 != 0)
		{
			printf("impossible\n");
			continue;
		}
		x = (s+d)/2;
		y = (s-d)/2;
		printf("%d %d\n", x, y);
	}
	return 0;
}
