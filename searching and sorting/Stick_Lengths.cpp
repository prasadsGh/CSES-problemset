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
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // optimal cost of changing the length will be towards the median of the array
    sort(v.begin(), v.end());
    ll median = (n % 2) ? v[n / 2] : (v[n / 2] + v[(n / 2) - 1]) / 2;
    for (auto i : v)
    {
        sum += abs(i - median);
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
