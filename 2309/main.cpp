#include <algorithm>
#include <cstdint>
#include <iostream>

using namespace std;

uint16_t inputs[9];

int main()
{
	// 입력을 처리함
	// -1. 아홉 개의 줄에 걸쳐 난쟁이의 키를 입력으로 처리
	for (uint16_t i = 0; i < 9; ++i)
	{
		cin >> inputs[i]; 
	}

	// 난쟁이의 키를 정렬해야 함
	sort(inputs + 0, inputs + 9);

	// 아홉 난쟁이 중 일곱 명을 선택하여 합이 100이 되는지 확인
	uint16_t sum;
	do {
		sum = 0;
		for (uint16_t i = 0; i < 7; ++i)
		{
			sum += inputs[i];
		}

		if (sum == 100)
		{
			break;
		}
	} while (next_permutation(inputs + 0, inputs + 9));
	// 출력을 처리함 
	// -1. 키의 합이 100이 되는 난쟁이를 오름차순으로 출력
	for (uint16_t i = 0; i < 7; ++i) 
	{
		cout << inputs[i] << '\n';
	}

	return 0;
}