/* author:prasad patil
   codeforces:rocklee07
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD9 = 998244353;
ll mod1e9 = 1000000007;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"

//-----------------------MODULAR INVERSION -----------------
ll inv(ll r){if(r==1) return 1;return (mod1e9-((mod1e9/r) *inv(mod1e9%r))%mod1e9+mod1e9)%mod1e9;}
//---------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)
if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a,ll n){ ll res=1; while(n){if(n%2){res*=a;n--;}else{a*=a;n/=2;}} return res;}
//----------------------code begines here-----------------------
bool cust(pair<ll,ll>&a, pair<ll,ll>&b)
{
    if(a.second<b.second) return true;
    else return false;
}
void dontquit()
{  
ll n; cin>>n;
vector<pair<ll,ll>>vp;
for(ll i=0;i<n;i++)
{
    ll x,y; cin>>x>>y;
    vp.push_back({x,y});
}

  sort(vp.begin(),vp.end(),cust);
  ll mn=vp[0].second;
  ll count=0;
  for(ll i=0;i+1<n;i++)
  {
    if(mn<=vp[i+1].first)
    {
        mn=vp[i+1].second;
        count++;
    }
  }
  cout<<count+1<<endl;

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