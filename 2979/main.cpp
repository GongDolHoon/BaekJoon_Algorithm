#include <cstdint>
#include <iostream>
#include <unordered_map>

using namespace std;

uint16_t a, b, c;
pair<uint16_t, uint16_t> inputs[3];
uint16_t output = 0;
unordered_map<uint16_t, uint16_t> map;

int main()
{
	// 입력 - A, B, C (1 <= C <= B <= A <= 100)
	cin >> a >> b >> c; 
	// 세 줄에 두 개의 정수 입력 (1이상 100이하)
	for (uint16_t ui = 0; ui < 3; ++ui)
	{
		cin >> inputs[ui].first >> inputs[ui].second;
		for (uint16_t uj = inputs[ui].first; uj < inputs[ui].second; uj++)
		{
			map.insert({uj, map[uj]++});
		}
	}

	for (auto value : map)
	{
		if (value.second == 1)
		{
			output += a;
		}
		else if (value.second == 2)
		{
			output += b * 2;
		}
		else
		{
			output += c * 3;
		}
	}

	// 출력 - 지불해야 하는 주차 요금
	cout << output << '\n';

	return 0;
}