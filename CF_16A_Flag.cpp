#include <stdio.h>

int main()
{
  int N, M, i, j, flag;
	char X1, X2;
	scanf("%d %d",&N,&M);
	scanf("%c",&X1);
	flag = 1;
	for(i=0; i<N; i++)
	{
		scanf("%c",&X1);
		if(i!=0 && X1 == X2)
			flag = 0;
		for(j=1; j<M; j++)
		{
			scanf("%c",&X2);
			if(X2 != X1)
				flag = 0;
		}
		scanf("%c",&X1);
	}
	if(flag == 1)
		printf("YES\n");
	else 
		printf("NO\n");
	return 0;
}
