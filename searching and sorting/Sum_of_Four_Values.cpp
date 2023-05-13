/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
vector<int> fun(vector<pair<int,pair<int,int>>>&a,int x)
{
    int n=a.size();
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(a[mid].first==x)
        {
            return {a[mid].second.first,a[mid].second.second};
        }
        else if(a[mid].first>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    
    return {-1,-1};
}
void prasad()
{
    int n, x; cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int n1=((n+1)/2);
    vector<pair<int,pair<int,int>>>vp1,vp2;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            vp1.push_back({v[i]+v[j],{i+1,j+1}});
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            vp2.push_back({v[i]+v[j],{i+1,j+1}});
        }
    }
    sort(vp2.begin(),vp2.end());
 
    for(int i=0;i<vp1.size();i++)
    {
        int t= x-vp1[i].first;
        vector<int> p1=fun(vp2,t);
        vector<int> a1={-1,-1};
        if(p1!=a1 && vp1[i].second.first!=p1[0] && vp1[i].second.second!=p1[0] && vp1[i].second.first!=p1[1] && vp1[i].second.second!=p1[1])
        {
            cout<<vp1[i].second.first<<" "<<vp1[i].second.second<<" "<<p1[0]<<" "<<p1[1]<<endl;
            return;
        }
    }
    cout<<"IMPOSSIBLE\n";
    return;
}
 
signed main()
{
          ios_base::sync_with_stdio(false);
             cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          
          while(t--)
          {
            prasad();
          }
          return 0;
}