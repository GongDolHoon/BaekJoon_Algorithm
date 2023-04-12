#include <iostream>
#include <cstdint>

int main()
{
	std::string sentence;

	std::cin >> sentence;

	int16_t answer[26] = {0,};

	for (char ch : sentence)
	{
		answer[ch - 97]++;
	}

	for (int16_t i : answer)
	{
		std::cout << i << " ";
	}

	return 0;
}