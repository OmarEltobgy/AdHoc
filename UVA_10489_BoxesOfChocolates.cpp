#include <stdio.h>

int main()
{
  long long testN, boxesN, friendsN, result, resultTemp, sizesN, X;
	scanf("%lld",&testN);
	while(testN--)
	{
		scanf("%lld %lld",& friendsN,& boxesN);
		result = 0;
		while(boxesN--)
		{
			scanf("%lld",& sizesN);
			resultTemp = 1;
			while(sizesN--)
			{
				scanf("%lld",& X);
				resultTemp = (resultTemp * X % friendsN) % friendsN;
			}
			result =  (result%friendsN + resultTemp%friendsN) % friendsN;
		}
		printf("%lld\n", result);
	}
	return 0;
}
