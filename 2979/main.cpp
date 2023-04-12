#include <iostream>
#include <cstdint>
#include <unordered_map>

int main()
{
	int16_t fee_1 = 0;
	int16_t fee_2 = 0;
	int16_t fee_3 = 0;

	std::cin >> fee_1 >> fee_2 >> fee_3;

	int16_t a_arrived = 0;
	int16_t a_leaved = 0;
	int16_t b_arrived = 0;
	int16_t b_leaved = 0;
	int16_t c_arrived = 0;
	int16_t c_leaved = 0;

	int32_t result = 0;

	std::cin >> a_arrived >> a_leaved;
	std::cin >> b_arrived >> b_leaved;
	std::cin >> c_arrived >> c_leaved;

	std::unordered_map<int16_t, int8_t> hash;

	for (int16_t i = a_arrived; i < a_leaved; ++i)
	{
		hash[i]++;
	}

	for (int16_t i = b_arrived; i < b_leaved; ++i)
	{
		hash[i]++;
	}

	for (int16_t i = c_arrived; i < c_leaved; ++i)
	{
		hash[i]++;
	}

	for (auto element : hash)
	{
		if (element.second == 1)
		{
			result += fee_1;
		}
		else if (element.second == 2)
		{
			result += fee_2 * 2;
		}
		else if (element.second == 3)
		{
			result += fee_3 * 3;
		}
	}

	std::cout << result << std::endl;

	return 0;
}