#include <cstdint>
#include <iostream>

using namespace std;

uint16_t output[26] = {0,};

int main()
{
	// ���ڿ��� �Է¹޴´�.
	string input;
	cin >> input;

	// ���ڸ� ������ ���ڿ��� �о� �迭�� �����͸� �߰��Ѵ�.
	for (auto ch : input)
	{
		output[ch-97]++;
	}

	// ����� ����Ѵ�.
	for (uint16_t ui = 0; ui < 25; ++ui)
	{
		std::cout << output[ui] << ' ';
	}
	std::cout << output[25];

	return 0;
}