#include <stdio.h>

int main()
{
  int girl[3], girlFlag[3], boy[3], b, g, justBigger, justBiggerIndex, biggest, flag, girlWin, boyWin;
	scanf("%d %d %d %d %d",&girl[0],&girl[1],&girl[2],&boy[0],&boy[1]);
	while(girl[0] != 0 && girl[1] != 0 && girl[2] != 0 && boy[0] != 0 && boy[1] != 0)
	{
		for(g=0; g<3; g++)
			girlFlag[g] = 0;
		girlWin = 0;
		boyWin = 0;
		for(b=0; b<2; b++)
		{
			justBigger = 53;
			justBiggerIndex = -1;
			for(g=0; g<3; g++)
			{
				if(girlFlag[g] == 0)
				{
					if(girl[g] > boy[b] && girl[g] < justBigger)
					{
						justBigger = girl[g];
						justBiggerIndex = g;
					}
				}
			}
			if(justBiggerIndex != -1)
			{
				girlFlag[justBiggerIndex] = 1;
				girlWin ++;
			}
			else
			{
				boyWin ++;
			}
		}
		if(girlWin >= 2)
		{
			boy[2] = -1;
		}
		else if(boyWin >=2)
		{
			boy[2] = 1;
			flag = 0;
			while(flag == 0 && boy[2] < 53)
			{
				flag = 1;
				for(g=0; g<3; g++)
				{
					if(girl[g] == boy[2])
					{
						boy[2] ++;
						flag = 0;
					}
				}
				for(b=0; b<2; b++)
				{
					if(boy[b] == boy[2])
					{
						boy[2] ++;
						flag = 0;
					}
				}
			}
			if(boy[2] > 52)
				boy[2] = -1;
		}
		else
		{
			biggest = -1;
			for(g=0; g<3; g++)
			{
				if(girlFlag[g] == 0 && girl[g] > biggest)
					biggest = girl[g];
			}
			boy[2] = biggest+1;
			flag = 0;
			while(flag == 0 && boy[2] < 53)
			{
				flag = 1;
				for(g=0; g<3; g++)
				{
					if(girl[g] == boy[2])
					{
						boy[2] ++;
						flag = 0;
					}
				}
				for(b=0; b<2; b++)
				{
					if(boy[b] == boy[2])
					{
						boy[2] ++;
						flag = 0;
					}
				}
			}
			if(boy[2] > 52)
				boy[2] = -1;
		}
		printf("%d\n", boy[2]);
		scanf("%d %d %d %d %d",&girl[0],&girl[1],&girl[2],&boy[0],&boy[1]);
	}
	return 0;
}
