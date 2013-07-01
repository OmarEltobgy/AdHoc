#include <stdio.h>

int get(int N)
{
  int position, number, i, toReturn;
	if(N <= 9)
	{
		return N;
	}
	else if(N <= 189)
	{
		N = N - 10;
		number = 10 + N / 2;
		position = N % 2;
		for(i=1; i>=position; i--)
		{
			toReturn = number%10;
			number = number/10;
		}
		return toReturn;
	}
	else if(N <= 2889)
	{
		N = N - 190;
		number = 100 + N / 3;
		position = N % 3;
		for(i=2; i>=position; i--)
		{
			toReturn = number%10;
			number = number/10;
		}
		return toReturn;
	}
	else if(N <= 38889)
	{
		N = N - 2890;
		number = 1000 + N / 4;
		position = N % 4;
		for(i=3; i>=position; i--)
		{
			toReturn = number%10;
			number = number/10;
		}
		return toReturn;
	}
	else if(N <= 488889)
	{
		N = N - 38890;
		number = 10000 + N / 5;
		position = N % 5;
		for(i=4; i>=position; i--)
		{
			toReturn = number%10;
			number = number/10;
		}
		return toReturn;
	}
	else if(N <= 5888889)
	{
		N = N - 488890;
		number = 100000 + N / 6;
		position = N % 6;
		for(i=5; i>=position; i--)
		{
			toReturn = number%10;
			number = number/10;
		}
		return toReturn;
	}
	else if(N <= 68888889)
	{
		N = N - 5888890;
		number = 1000000 + N / 7;
		position = N % 7;
		for(i=6; i>=position; i--)
		{
			toReturn = number%10;
			number = number/10;
		}
		return toReturn;
	}
	else
	{
		N = N - 68888890;
		number = 10000000 + N / 8;
		position = N % 8;
		for(i=7; i>=position; i--)
		{
			toReturn = number%10;
			number = number/10;
		}
		return toReturn;
	}
}

int main()
{
	int N, P;
	while(scanf("%d",&N) != EOF)
	{
		P = get(N);
		printf("%d\n",P);
	}
}
