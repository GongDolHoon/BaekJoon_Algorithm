#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

uint16_t output = 0;
uint32_t M = 0;

vector<uint16_t> Split(string source, string delimiter)
{
	vector<uint16_t> token_vector;
	long long pos = 0;
	string token = "";
	while ((pos = source.find(delimiter)) != string::npos)
	{
		token = source.substr(0, pos);
		source.erase(0, pos + delimiter.length());
		token_vector.push_back(atoi(token.c_str()));
	}
	token_vector.push_back(atoi(source.c_str()));

	return token_vector;
}

void CombinationRecursive(int16_t start, vector<uint16_t> b, uint16_t r, vector<uint16_t> source)
{
	if (b.size() == r)
	{
		if (b[0] + b[1] == M)
		{
			output++;
		}
		return;
	}

	for (int16_t i = start + 1; i < source.size(); ++i)
	{
		b.push_back(source[i]);
		CombinationRecursive(i, b, r, source);
		b.pop_back();
	}
}

int main()
{
	uint16_t N;
	string input;

	cin >> N;
	cin >> M;
	cin.ignore();
	getline(cin, input);

	vector<uint16_t> materials = Split(input, " ");

	for (uint16_t i = 0; i < materials.size() - 1; ++i)
	{
		for (uint16_t j = i + 1; j < materials.size(); ++j)
		{
			if (materials[i] + materials[j] == M)
			{
				++output;
			}
		}
	}

	cout << output << endl;

	return 0;
}