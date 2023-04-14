#include <cstdint>
#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{
	uint32_t N, M;
	std::cin >> N >> M;

	std::unordered_map<std::string, uint32_t> hash1;
	std::unordered_map<uint32_t, std::string> hash2;

	for (uint32_t i = 1; i <= N; ++i)
	{
		std::cin >> hash2[i];
		hash1[hash2[i]] = i;
	}

	std::vector<std::string> problems(M);

	for (uint32_t i = 0; i < M; ++i)
	{
		std::cin >> problems[i];
	}

	for (uint32_t i = 0; i < M; ++i)
	{
		if (atoi(problems[i].c_str()) == 0)
		{
			std::cout << hash1[problems[i]] << '\n';
		}
		else
		{
			std::cout << hash2[atoi(problems[i].c_str())] << '\n';
		}
	}

	return 0;
}