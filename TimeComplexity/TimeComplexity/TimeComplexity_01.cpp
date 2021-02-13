//clock 함수를 이용한 방법

#include <iostream>

int main()
{
	clock_t start, end;
	int result;
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

	result = end - start;
	printf("%d", result);

	return 0;
}