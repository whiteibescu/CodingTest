#include <iostream>	

int main()
{
	clock_t start, end;
	double result = 0;
	int sum = 0;

	start = clock();

	for (int i = 0; i < 10000; ++i)
	{
		for (int j = 0; j < 10000; ++j)
		{
			sum += i * j;
		}
	}

	end = clock();
	result = (double)(end - start);
	printf("%d", result);
}