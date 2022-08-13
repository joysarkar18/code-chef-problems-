#include <bits/stdc++.h>
using namespace std;
int count(string s, char a)
{
	int sum = 0;
	for (auto i : s)
	{
		if (i == a)
		{
			sum++;
		}
	}
	return sum;
}
void solve()
{
	int n, k;
	string s;
	cin >> n >> k >> s;

	map<char, int> mp;

	mp['1'] = count(s, '1');
	mp['0'] = count(s, '0');

	int cc = max(mp['0'], mp['1']) - min(mp['0'], mp['1']);

	int pl = 0;
	if (cc % k)
	{
		pl++;
	}

	cc /= k;
	cc += pl;

	cout << cc << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}