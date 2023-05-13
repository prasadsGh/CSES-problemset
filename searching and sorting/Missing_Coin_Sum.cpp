/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
  ll n; cin >>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  ll res=1;
  ll i=1;
  for( i=0;i<n && res>=v[i];i++)
  {
    //  cout<<res<<" ";
     res+=v[i];
  }
  // cout<<endl;
  cout<<res<<endl;
}

int main()
{
          ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
          ll t=1; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
