#include <algorithm>
#include <cstdint>
#include <iostream>

using namespace std;

uint16_t inputs[9];

int main()
{
	// �Է��� ó����
	// -1. ��ȩ ���� �ٿ� ���� �������� Ű�� �Է����� ó��
	for (uint16_t i = 0; i < 9; ++i)
	{
		cin >> inputs[i]; 
	}

	// �������� Ű�� �����ؾ� ��
	sort(inputs + 0, inputs + 9);

	// ��ȩ ������ �� �ϰ� ���� �����Ͽ� ���� 100�� �Ǵ��� Ȯ��
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
	// ����� ó���� 
	// -1. Ű�� ���� 100�� �Ǵ� �����̸� ������������ ���
	for (uint16_t i = 0; i < 7; ++i) 
	{
		cout << inputs[i] << '\n';
	}

	return 0;
}