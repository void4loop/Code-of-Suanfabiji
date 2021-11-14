#include <cstdio>

int main()
{
	long long a,b;
	while(scanf("%lld %lld", &a,&b) != EOF)
	{
		long long num = 0;
		int A[15],B[15];
		for(int i = 0; i < 15; i++)
		{
			A[i] = a % 10;
			a = a/10;
		}
		for(int i = 0; i < 15; i++)
		{
			B[i] = b % 10;
			b = b/10;
		}
		for(int i = 0; i < 15; i++)
		{
			for(int j = 0; j < 15; j++)
			{
				num +=  A[i] * B[j];
			}
		}
		printf("%lld\n", num);
	}
	return 0;
}
