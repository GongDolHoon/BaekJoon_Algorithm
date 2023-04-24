#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> Split(string source, string delimiter)
{
	vector<string> ret;
	long long pos = 0;
	string token = "";

	while ((pos = source.find(delimiter)) != string::npos)
	{
		token = source.substr(0, pos);
		ret.push_back(token);
		source.erase(0, pos + delimiter.length());
	}
	ret.push_back(source);

	return ret;
}

int main()
{
	string s = "Å· °« Á¦³Ê·²";
	vector<string> _vector = Split(s, " ");

	for (auto str : _vector)
	{
		cout << str << '\n';
	}

	return 0;
}