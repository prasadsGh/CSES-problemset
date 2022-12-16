#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD = 1000000007;
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
bool isvalid(ll i,ll j,ll n)
{
    if(i>=n) return false;
    if(j>=n) return false;
    if(i<0) return false;
    if(j<0) return false;
    return true;
}
void dontquit()
{
    ll n; cin>>n;
    char arr[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    if(arr[0][0]=='*')
    {
        cout<<0<<endl;
        return;
    }
    ll ans[n][n];
     for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ans[i][j]=0;
        }
        cout<<endl;
    }
    ans[0][0]=1;
     for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(isvalid(i-1,j,n) && arr[i][j]!='*')
            {
                ans[i][j]+=(ans[i-1][j]);
                ans[i][j]%=MOD;
            }
            if(isvalid(i,j-1,n) && arr[i][j]!='*')
            {
                ans[i][j]+=(ans[i][j-1]);
                ans[i][j]%=MOD;
            }
        }
    }
    //   for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<n;j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<ans[n-1][n-1]<<endl;
    


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