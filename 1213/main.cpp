#include <cstdint>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	string input;
	cin >> input;

	map<char, uint16_t> hash;

	for (char c : input)
	{
		hash[c] += 1;
	}

	bool isFail = false;
	uint16_t size = 0;

	for (auto data : hash)
	{
		size++;
		if (data.second % 2 == 1)
		{
			if (isFail == false)
			{
				isFail = true;
				continue;
			}
			else
			{
				cout << "I'm Sorry Hansoo\n";
				return 0;
			}
		}
	}

	string output;
	output.resize(input.size());

	uint16_t i = 0;

	for (auto data : hash)
	{
		while (data.second != 0)
		{
			if (data.second == 1)
			{
				output[input.size()/2] = data.first;
				data.second -= 1;
				break;
			}

			output[i] = data.first;
			output[input.size() - (i++ + 1)] = data.first;
			data.second -= 2;
		}
	}

	std::cout << output << '\n';

	return 0;
}