#include <stdio.h>

int main()
{
  unsigned long long result, N;
	scanf("%llu",&result);
	while(result != 0)
	{
		N = (result * 10) / 9;
		if( (N-1) - (N-1)/10 == result )//N % 10 == 0 
			printf("%llu %llu\n", (N-1), N);
		
		else if( (N+1) - (N+1)/10 == result )//N % 10 == 9
			printf("%llu %llu\n", N, (N+1));

		else
			printf("%llu\n", N);	
		
		scanf("%llu",&result);
	}
	return 0;	
}
