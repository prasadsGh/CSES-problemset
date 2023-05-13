/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void prasad()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<pair<ll, ll>> vp;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        vp.push_back({v[i], i});
    }
    sort(vp.begin(), vp.end());
    for (ll i = 0; i + 1 < n; i++)
    {
        if (vp[i].second > vp[i + 1].second)
            count++;
    }
    cout << count + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    while (t--)
    {
        prasad();
    }
    return 0;
}
