#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

void CombinationRecursive(int16_t start, vector<int16_t> b, uint16_t r, vector<int16_t> input)
{
	if (b.size() == r)
	{
		for (int16_t i : b)
		{
			cout << i << " ";
		}
		cout << '\n';
		return;
	}

	for (int16_t i = start + 1; i < input.size(); ++i)
	{
		b.push_back(input[i]);
		CombinationRecursive(i, b, r, input);
		b.pop_back();
	}
}

int main()
{
	vector<int16_t> source = {1, 2, 3, 4, 6};
	vector<int16_t> tmp;
	CombinationRecursive(-1, tmp, 3, source);

	return 0;
}