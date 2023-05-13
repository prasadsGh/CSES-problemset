
#include <bits/stdc++.h>
using namespace std;
int manyApples(vector<int>&v,int n,int d)
{
  
    int ans=0;

    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(v[i]<=v[j] && abs(v[i]-v[j])<=d)
            {
                count++;
            }
        }
        if(count>ans)
        {
            ans=count;
        }
        
    }

   return ans;
}

int main()
{
        int n; cin>>n;
        int d; cin>>d;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans= manyApples(v,n,d);
        cout<<ans<<endl;

        return 0;
}
