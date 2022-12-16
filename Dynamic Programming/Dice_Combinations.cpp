#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD = 1e9+7;
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
ll arr[1000005];
ll f(ll n)
{
    if(n==0) return 1;
    if(n<0) return 0;
    if(arr[n]!=-1) return arr[n];
    arr[n]=(f(n-1)%MOD +f(n-2)%MOD+ f(n-3)%MOD+ f(n-4)%MOD +f(n-5)%MOD+ f(n-6)%MOD)%MOD;
    return arr[n];
}
void dontquit()
{
  ll n; cin>>n;
  ll ans= f(n);
  cout<<ans<<endl;

}
int main()
{
    memset(arr,-1,sizeof(arr));
ll t=1;
// cin>>t;
while(t--)
{
dontquit();
}
return 0;
}