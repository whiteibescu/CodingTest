#include <iostream>	

int main()
{
	time_t start, end;
	double result;
	int sum = 0;

	start = time(NULL);

	for (int i = 0; i < 10000; ++i)
	{
		for (int j = 0; j < 10000; ++j)
		{
			sum += i * j;
		}
	}

	end = time(NULL);

	result = (double)(end - start);
	printf("%d", result);

}