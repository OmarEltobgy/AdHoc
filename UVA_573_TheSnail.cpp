#include <stdio.h>

int main()
{
  int wellHeight, goDown, daysN, fatigue;
	double goUp, position, decrease;
	scanf("%d %lf %d %d",&wellHeight,&goUp,&goDown,&fatigue);
	decrease = goUp * (double)fatigue/100;
	while(wellHeight != 0)
	{
		position = 0;
		daysN = 0;
		while(true)
		{
			daysN ++;
			position += goUp;
			if(position > wellHeight)
			{
				printf("success on day %d\n", daysN);
				break;	
			}
			position -= goDown;
			if(position < 0)
			{
				printf("failure on day %d\n", daysN);
				break;	
			}
			if(goUp != 0)
			{
				goUp = goUp - decrease;
				if(goUp < 0)
					goUp = 0;
			}
		}
		scanf("%d %lf %d %d",&wellHeight,&goUp,&goDown,&fatigue);
		decrease = goUp * (double)fatigue/100;	
	}
	return 0;
}
