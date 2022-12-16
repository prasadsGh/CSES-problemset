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
    int n, p; cin>>n>>p;
    int  price[n],number[n];
    
    for(int i=0;i<n;i++) cin>>price[i];
    for(int i=0;i<n;i++) cin>>number[i];
 
    int dp[n+1][p+1];
    //i-->represent indices of given prices and number arrays
    //j-->represent all possible prices from 1 to P 
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int j=0;j<=p;j++)
    {
        dp[0][j]=0;
    }
    // for(ll i=0;i<=n;i++)
    // {
    //     for(ll j=0;j<=p;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
        
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=p;j++)
        {
            if((j-price[i-1])<0)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                
                dp[i][j]=max(dp[i-1][j],number[i-1]+dp[i-1][j-price[i-1]]);
            }
        }
    }
    //  for(ll i=0;i<=n;i++)
    // {
    //     for(ll j=0;j<=p;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
        
    //     }
    //     cout<<endl;
    // }
    cout<<dp[n][p]<<endl;

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