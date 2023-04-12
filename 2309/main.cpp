#include <algorithm>
#include <cstdint>
#include <iostream>

int main()
{
	int16_t heights[9] = {0,};

	for (int8_t i = 0; i < 9; ++i)
	{
		std::cin >> heights[i];
	}

	std::sort(&heights[0], &heights[9]);

	int16_t result = 0;

	do {
		result = 0;

		for (int i = 0; i < 7; ++i)
		{
			result += heights[i];
		}

		if (result == 100)
		{
			for (int i = 0; i < 7; ++i)
			{
				std::cout << heights[i] << std::endl;
			}
			break;
		}
	} while(std::next_permutation(&heights[0], &heights[9]));

	return 0;
}