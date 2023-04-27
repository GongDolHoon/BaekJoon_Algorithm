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
	// �Է� - A, B, C (1 <= C <= B <= A <= 100)
	cin >> a >> b >> c; 
	// �� �ٿ� �� ���� ���� �Է� (1�̻� 100����)
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

	// ��� - �����ؾ� �ϴ� ���� ���
	cout << output << '\n';

	return 0;
}