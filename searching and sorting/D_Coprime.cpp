/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
bool com(pair<int, int>&a, pair<int, int>&b)
{
    return a.second > b.second;
}
void prasad()
{
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int>hash(1005, -1);
    vector<pair<int, int>>vp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (hash[v[i]] == -1)
        {
            vp.push_back({v[i], i + 1});
            hash[v[i]] = 0;
        }
    }
    n = vp.size();
    sort(vp.begin(), vp.end(), com);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (__gcd(vp[i].first, vp[j].first) == 1)
            {

                ans = max(ans, vp[i].second + vp[j].second);
                return;
            }
        }
    }
    if (ans == 0)
        cout << -1 << endl;
    else cout << ans << endl;

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
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
