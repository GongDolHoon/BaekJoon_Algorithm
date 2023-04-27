#include <cstdint>
#include <iostream>

using namespace std;

uint16_t output[26] = {0,};

int main()
{
	// 문자열을 입력받는다.
	string input;
	cin >> input;

	// 문자를 단위로 문자열을 읽어 배열에 데이터를 추가한다.
	for (auto ch : input)
	{
		output[ch-97]++;
	}

	// 결과를 출력한다.
	for (uint16_t ui = 0; ui < 25; ++ui)
	{
		std::cout << output[ui] << ' ';
	}
	std::cout << output[25];

	return 0;
}