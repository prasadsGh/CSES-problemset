#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD = 998244353;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"
//-----------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)
if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a,ll n){ ll res=1; while(n){if(n%2){res*=a;n--;}else{a*=a;n/=2;}} return res;}
//----------------------code begines here-----------------------

int main()
{
     ll n,m; cin>>n>>m;
    set<pair<ll,ll>>ms;
    // set<pair<ll,ll>>:: iterator it;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        ms.insert({x,i});
    }
    vector<ll>v; 
    for(ll i=0;i<m;i++) 
    {
        ll x; cin>>x;
        v.push_back(x);
    }
    for(ll i=0;i<m;i++) 
    {
        pair<ll,ll>p={v[i],0};
        auto it= lower_bound(all(ms),p);
        if(((*it).first)==v[i])
        {
            cout<<v[i]<<endl;
            ms.erase(it);
        }
        else if(it==ms.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            it--;
            cout<<(*it).first<<endl;
            ms.erase(it);
        }
    }

return 0;
}