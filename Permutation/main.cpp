#include <algorithm>
#include <cstdint>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void Permutation1(vector<uint16_t> input, uint16_t r)
{
	set<string> permutation_set;

	do {
		string tmp = "";
		for (uint16_t i = 0; i < r; ++i)
		{
			char c = input[i] + 48;
			tmp += c;
			tmp += ' ';
		}
		permutation_set.insert(tmp);
	} while(next_permutation(input.begin(), input.end()));

	for(string s: permutation_set)
	{
		cout << s << '\n';
	}
}

void Permutation2(vector<uint16_t> input, uint16_t r, uint16_t depth, set<string>& permutation_set)
{
	if(depth == input.size() - 1)
	{
		string tmp = "";
		for (uint16_t i = 0; i < r; ++i)
		{
			char c = input[i] + 48;
			tmp += c;
			tmp += ' ';
		}
		permutation_set.insert(tmp);
		return;
	}

	for (uint16_t i = depth; i < input.size(); ++i)
	{
		swap(input[i], input[depth]);
		Permutation2(input, r, depth + 1, permutation_set);
		swap(input[i], input[depth]);
	}

	return;
}

int main()
{
	vector<uint16_t> source = {4, 3, 5, 2, 1};
	set<string> permu_set;
	// Permutation1(source, 2);
	Permutation2(source, 3, 0, permu_set);

	for (string s : permu_set)
	{
		std::cout << s << '\n';
	}

	return 0;
}