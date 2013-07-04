#include <stdio.h>

int main()
{
  int width, height, min, x, y, i;
	scanf("%d %d",&width,&height);
	if(width < height)
		min = width;
	else
		min = height;
	printf("%d\n", min+1);
	y = height;
	x = 0;
	for(i=0; i<=min; i++)
	{
		printf("%d %d\n", x, y);
		y--;
		x++;
	}
	return 0;
}
