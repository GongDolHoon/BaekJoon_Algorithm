#include <cstdint>
#include <iostream>

using namespace std;

uint16_t A, B, C, a, b;
uint16_t input[104] = {0, };
uint16_t output = 0;

int main()
{
	cin >> A >> B >> C;
	for (uint16_t i = 0; i < 3; ++i)
	{
		cin >> a >> b;
		for (uint16_t j = a; j < b; ++j)
		{
			input[j] += 1;
		}
	}

	for (uint16_t i = 1; i < 100; ++i)
	{
		if (input[i])
		{
			if (input[i] == 1)
			{
				output += A;
			}
			else if (input[i] == 2)
			{
				output += B * 2;
			}
			else
			{
				output += C * 3;
			}
		}
	}

	cout << output << '\n';

	return 0;
}