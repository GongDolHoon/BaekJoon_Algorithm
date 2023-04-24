#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void ImplementUniqueWithSet(vector<uint16_t> v)
{
	set<uint16_t> s;

	for (auto data : v)
	{
		s.insert(data);
	}

	for (auto data : s)
	{
		cout << data << '\n';
	}
}

void ImplementUniqueWithSTL(vector<uint16_t> v)
{
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (auto data : v)
	{
		cout << data << '\n';
	}
}

int main()
{
	vector<uint16_t> v = {3, 2, 1, 1, 2, 3, 3, 5, 6, 6, 8, 9, 9};

	ImplementUniqueWithSet(v);
	cout << "-----------------------------" << endl;
	ImplementUniqueWithSTL(v);

	return 0;
}