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
void dontquit()
{
    ll n,m,k; cin>>n>>m>>k;
    vector<ll>v,v1;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        v.push_back(x);
    }
    for(ll i=0;i<m;i++)
    {
        ll x; cin>>x;
        v1.push_back(x);
    }
    sort(all(v));
    sort(all(v1));
  ll i=0,j=0;
  ll count=0;
  while(i<n)
  {
    while( j<m && v1[j]<v[i]-k)
    {
        j++;
    }
    if(i<n && j<m && abs(v[i]-v1[j])<=k)
    {
         while(i<n && j<m && abs(v[i]-v1[j])<=k)
         {
        i++;
        j++;
        count++;
            }

    }
   else
    i++;
  }
  cout<<count<<endl;


}
int main()
{
ll t=1;
// cin>>t;
while(t--)
{
dontquit();
}
return 0;
}