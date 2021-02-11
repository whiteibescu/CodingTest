//Time 함수를 이용한 방법

#include <stdio.h>
#include <time.h>

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
	printf("%f", result);
	printf("결과물 %d", sum);
	return 0;

}