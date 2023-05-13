#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n = 15;
	vector<int>v = {1, 3, 4, 5, 6, 9, 8, 11, 36, 25, 75, 12, 11, 82, 46};
	map<int, int>mp;
	int ans = 0;
	int size = 0;
	for (int i = 0; i < n; i++)
	{
		mp[v[i]]++;
	}
	for (int i = 0; i < 100; i++)
	{
		if (mp[i]) ans++;
	}
	size = mp.size();
	cout << ans << " " << size << endl;
	return 0;
}