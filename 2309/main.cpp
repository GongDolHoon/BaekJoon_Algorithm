#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

uint16_t inputs[9];

int main()
{
	// 난쟁이 9명에 대한 입력을 처리함
	for (uint16_t i = 0; i < 9; ++i)
	{
		cin >> inputs[i];
	}

	// 1. 난쟁이 9명 키의 합을 구함
	uint16_t sum = 0;
	for (uint16_t height : inputs)
	{
		sum += height;
	}

	// 2. 9명 중 2명을 뽑음
	pair<uint16_t, uint16_t> pair;

	for (uint16_t i = 0; i < 9; ++i)
	{
		for (uint16_t j = 0; j < i; ++j)
		{
			// 3. 1번에서 구한 결과에 2번을 합한 결과를 뺌
			if (sum - inputs[i] - inputs[j] == 100)
			{
				// 4. 난쟁이 7명의 키의 합이 100이 될 시, 선택한 두 명을 기억
				pair = {i, j};
				goto escape;
			}
		}
	}
escape:
	// 5. 4번에서 기억한 난쟁이를 제외한 7명의 난쟁이를 선정
	vector<uint16_t> v;
	v.reserve(7);
	for (uint16_t i = 0; i < 9; ++i)
	{
		if (i == pair.first || i == pair.second)
		{
			continue;
		}
		v.push_back(inputs[i]);
	}

	// 결과를 오름차순으로 일곱 줄로 출력
	sort(v.begin(), v.end());
	for (auto i : v)
	{
		cout << i << '\n';
	}

	return 0;
}