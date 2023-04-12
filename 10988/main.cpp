#include <iostream>
#include <cstdint>

int main()
{
	std::string input;
	std::cin >> input;

	bool result = true;

	for (int16_t i = 0; i <= input.size() / 2; ++i)
	{
		if (input[i] - input[input.size() - (i + 1)] != 0)
		{
			result = false;
			break;
		}
	}

	std::cout << result << std::endl;

	return 0;
}