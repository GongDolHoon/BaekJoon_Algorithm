#include <iostream>
#include <string>

void EncodedWithROT13(std::string& source)
{
	for (int16_t i = 0; i < source.size(); ++i)
	{
		if (source[i] >= 65 && source[i] <= 90)
		{
			if ((source[i] / 78) == 1)
			{
				source[i] = ((source[i] + 13) - 26);
			}
			else
			{
				source[i] = ((source[i] + 13));
			}
		}
		else if (source[i] >= 97 && source[i] <= 122)
		{
			if ((source[i] / 110) == 1)
			{
				source[i] = ((source[i] + 13) - 26);
			}
			else
			{
				source[i] = ((source[i] + 13));
			}
		}
	}
}

int main()
{
	std::string input;
	std::getline(std::cin, input, '\n');

	EncodedWithROT13(input);

	std::cout << input << std::endl;

	return 0;
}