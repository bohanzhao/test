#include <iostream>
#include <cstring>
using namespace std;

bool isunique(string s){
	bool a[256];
	memset (a, 0, sizeof(a));
	int len = s.length();
	for (int i = 0; i < len; ++i){
		int p = (int)s[i];
		if (a[p]) return false;
		else a[p] = true;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	string s1 = "what the fuck";
	string s2 = "abc";
	cout << isunique(s1) << endl;
	cout << isunique(s2) << endl;
}