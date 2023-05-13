/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

void prasad()
{
	vector<int>v;
	for (int i = 0; i < 8; i++)
	{
		v.push_back(0);
	}
	v.push_back(9);
	cout << "Hello WOrld";
	cout << v.size() << " " << v.capacity() << endl;
}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cout << "Hello WOrld";

	while (t--)
	{
		prasad();
	}
	return 0;
}
