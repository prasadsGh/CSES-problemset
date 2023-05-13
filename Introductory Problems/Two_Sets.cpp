/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n; cin>>n;
    ll sum=((n*(n+1))/2);
    if((sum%2)!=0)
    {
        cout<<"NO\n";
        return;
    }
   map<int,int>mp;
    ll temp=(sum/2);
    ll m=n;
    while(temp>0)
    {
        temp-=m;
       mp[m]++;
        m--;
    }
    m++;
    mp.erase(m);
    temp+=m;
    if(mp.find(temp)==mp.end() && temp!=0)
    {
        mp[temp]++;
    }
    else if(mp.find(temp)!=mp.end())
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    cout<<mp.size()<<endl;
    for(auto i:mp)
    {
        if(i.second!=0)
            cout<<i.first<<" ";
    }
    cout<<endl;
    cout<<n-mp.size()<<endl;
    for(int i=0;i<n;i++)
    {
        if(mp.find(i+1)==mp.end()) cout<<i+1<<" ";
    }
    cout<<endl;


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
