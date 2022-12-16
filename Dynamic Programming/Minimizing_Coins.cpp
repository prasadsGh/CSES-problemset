#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD = 998244353;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 1e9
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
    ll n,x; cin>>n>>x;
    vector<ll>dp(x+5,INF);
    ll coins[n];
    //  for(ll i=0;i<n;i++) cout<<dp[i]<<endl;
    //     cout<<" ------------------\n";
    for(ll i=0;i<n;i++) cin>>coins[i];
    sort(coins,coins+n);
    dp[0]=0;
   
        for(ll x1=1;x1<=x;x1++)
        {
             for(ll i=0;i<n;i++)
            {
                if((x1-coins[i])>=0)
                    dp[x1]=min(dp[x1],dp[x1-coins[i]]+1);
              
            }
        }
       
        if(dp[x]==INF) 
        {
            cout<<-1<<endl;
            return;
        }
        else 
        {
            cout<<dp[x]<<endl;
        }



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