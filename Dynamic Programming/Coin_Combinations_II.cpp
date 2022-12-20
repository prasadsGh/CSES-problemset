#include <bits/stdc++.h>
using namespace std;
#define ll int 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
#define MOD 1000000007
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
    ll n,x;
    cin>>n>>x;
    vector<ll>coins(n);
    for(ll i=0;i<n;i++) cin>>coins[i];
    sort(all(coins));
    ll dp[n+1][x+1];
    //dp[i][j]-->no of ways of summing up the coins i to form sum j 
    //i-indices of the coins ,j-->sum of the coins 
    for(ll i=0;i<=n;i++)
    {
        dp[i][x]=1;
    }
    for(ll i=0;i<=x;i++)
    {
        dp[n][i]=0;
    }
    dp[n][x]=1;

    for(ll i=(n-1);i>=0;i--)
    {
        
        for(ll j=(x-1);j>=0;j--)
        {
            dp[i][j]=0;
            ll op1=0,op2=0;
            if(j+coins[i]<=x)
            {
               op1=dp[i][j+coins[i]];
                
            }
            if(i+1<=n)
            {
                op2=dp[i+1][j];
                
            }
            dp[i][j]=((op1%MOD)+(op2%MOD))%MOD;
        }
    }
    // for(ll i=0;i<=n;i++)
    // {
    //     for(ll j=0;j<=x;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[0][0]<<endl;
    


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