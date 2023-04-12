#include <cstdint>
#include <iostream>
#include <vector>

void Split(std::string source, std::string& first, std::string& second)
{
	uint16_t pos = source.find('*');
	first = source.substr(0, pos);
	second = source.substr(pos + 1, source.size());
}

int main()
{
	uint16_t input;
	std::cin >> input;

	std::string pattern;
	std::cin >> pattern;

	std::string first;
	std::string last;

	Split(pattern, first, last);

	std::vector<std::string> files;
	std::string file;

	for (uint16_t i = 0; i < input; ++i)
	{
		std::cin >> file;
		files.push_back(std::move(file));
	}

	bool isReturn = false;

	for (std::string file : files)
	{
		if (file.size() < first.size() + last.size())
		{
			std::cout << "NE" << std::endl;
			continue;
		}

		for (int16_t i = 0; i < first.size(); ++i)
		{
			if (file[i] != first[i])
			{
				std::cout << "NE" << std::endl;
				isReturn = true;
				break;
			}
		}

		if (isReturn == true)
		{
			isReturn = false;
			continue;
		}

		for (int16_t i = last.size(); i > 0; --i)
		{
			if (file[file.size() - i] != last[last.size() - i])
			{
				std::cout << "NE" << std::endl;
				isReturn = true;
				break;
			}
		}

		if (isReturn == true)
		{
			isReturn = false;
			continue;
		}

		std::cout << "DA" << std::endl;
	}

	return 0;
}