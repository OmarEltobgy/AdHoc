#include <stdio.h>

int main()
{
  long long k, b, totalTime, bacteriaN, timeElplased, initialBacteria;
	scanf("%lld %lld %lld %lld",&k,&b,&totalTime,&bacteriaN);
	timeElplased = 0;
	initialBacteria = 1;
	while(initialBacteria < bacteriaN && timeElplased < totalTime)
	{
		initialBacteria = k*initialBacteria + b;
		timeElplased ++;
	}
	if(initialBacteria > bacteriaN)
		timeElplased--;
	printf("%lld\n", totalTime-timeElplased);
	return 0;
}
