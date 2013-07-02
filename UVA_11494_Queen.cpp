#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x1, y1, x2, y2, result;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)
	{
		if(x1 == x2 && y1 == y2)
			result = 0;
		else if(x1 == x2)
			result = 1;
		else if(y1 == y2)
			result = 1;
		else if(abs(x2-x1) == abs(y2-y1))
			result = 1;
		else if(abs(x2-x1) == abs(y1-y2))
			result = 1;
		else
			result = 2;
		printf("%d\n",result);
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	}
	return 0;
}
