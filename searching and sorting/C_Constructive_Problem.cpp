/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

void prasad()
{
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    //finding mex of given set

    vector<int>hash(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (v[i] < n)
        {
            hash[v[i]]++;
        }
    }
    int isdup = 0;
    int mex = -1;
    for (int i = 0; i < n; i++)
    {

        if (hash[i] == 0)
        {
            mex = i;

            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[i] > 1) isdup = 1;
    }
    if (mex == -1)
    {
        mex = n;
    }
    if (mex > *max_element(v.begin(), v.end()) && isdup)
    {
        cout << "Yes\n";
        return;
    }
    if (mex + 1 < n && hash[mex + 1] == 0)
    {
        cout << "Yes\n";
        return;
    }
    int i1 = -1, j1 = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == (mex + 1))
        {
            i1 = i;
            break;
        }
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (v[j] == (mex + 1))
        {
            j1 = j;
            break;
        }
    }
    // cout << i1 << " " << j1 << endl;
    for (int i = i1; i <= j1; i++)
    {
        v[i] = mex;
    }
    int newmex = -1;
    vector<int>hash1(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (v[i] < n)
        {
            hash1[v[i]]++;
        }

    }
    for (int i = 0; i < n; i++)
    {
        if (hash1[i] == 0)
        {
            newmex = i;
            break;
        }
    }
    if (newmex == -1)
    {
        newmex = n;
    }
    if (newmex == (mex + 1))
    {
        cout << "Yes\n";
        return;
    }
    cout << "No\n";

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
