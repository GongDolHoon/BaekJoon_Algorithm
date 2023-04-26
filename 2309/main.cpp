#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

uint16_t inputs[9];

int main()
{
	// ������ 9�� ���� �Է��� ó����
	for (uint16_t i = 0; i < 9; ++i)
	{
		cin >> inputs[i];
	}

	// 1. ������ 9�� Ű�� ���� ����
	uint16_t sum = 0;
	for (uint16_t height : inputs)
	{
		sum += height;
	}

	// 2. 9�� �� 2���� ����
	pair<uint16_t, uint16_t> pair;

	for (uint16_t i = 0; i < 9; ++i)
	{
		for (uint16_t j = 0; j < i; ++j)
		{
			// 3. 1������ ���� ����� 2���� ���� ����� ��
			if (sum - inputs[i] - inputs[j] == 100)
			{
				// 4. ������ 7���� Ű�� ���� 100�� �� ��, ������ �� ���� ���
				pair = {i, j};
				goto escape;
			}
		}
	}
escape:
	// 5. 4������ ����� �����̸� ������ 7���� �����̸� ����
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

	// ����� ������������ �ϰ� �ٷ� ���
	sort(v.begin(), v.end());
	for (auto i : v)
	{
		cout << i << '\n';
	}

	return 0;
}