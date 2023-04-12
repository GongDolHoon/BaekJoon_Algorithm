#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>
#include <map>

int main()
{
	int16_t input;

	std::cin >> input;

	std::vector<std::string> names(input);

	for (int16_t i = 0; i < input; ++i)
	{
		std::cin >> names[i];
	}

	std::map<char, uint16_t> name_list;

	for (std::string name : names)
	{
		name_list[name[0]]++;
	}

	bool is_exist = false;

	for (auto answer : name_list)
	{
		if (answer.second >= 5)
		{
			std::cout << answer.first;
			is_exist = true;
		}
	}

	if (is_exist == false)
	{
		std::cout << "PREDAJA" << std::endl;
	}

	return 0;
}