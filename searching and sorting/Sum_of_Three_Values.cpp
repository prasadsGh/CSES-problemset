/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
int fun(vector<pair<int, int>> &a, int l, int r, int t)
{
   int low = l, high = r;
   int mid = l + 1;
   while (low <= high)
   {
      // cout<<"binary"<<" "<<l<<" "<<r<<endl;
      mid = ((low + high) / 2);
      if (a[mid].first == t)
      {
         return mid;
      }
      else if (a[mid].first > t)
      {
         high = (mid - 1);
      }
      else
      {
         low = (mid + 1);
      }
   }

   return mid;
}
void prasad()
{
   int n, x;
   cin >> n >> x;
   vector<int> v(n);
   vector<pair<int, int>> vp(n);
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
      vp[i] = {v[i], i + 1};
   }

   if (n < 3)
   {
      cout << "IMPOSSIBLE\n";
      return;
   }
   sort(vp.begin(), vp.end());
   int l = 0, r = n - 1;
   while (l < r)
   {
      cout << "simple"
           << " " << l << " " << r << endl;
      cout << "values"
           << " " << vp[l].first << " " << vp[r].first << endl;
      int x1 = vp[l].first + vp[r].first;
      if (x - x1 > 0)
      {
         int temp1 = x - x1;
         int temp = fun(vp, 0, n - 1, temp1);
         if ((x1 + vp[temp].first) == x)
         {
            if ((temp == l))
            {
               l++;
            }
            else if (temp == r)
            {
              r--;
            }
            else
            {
               cout << vp[l].second << " " << vp[r].second << " " << vp[temp].second << endl;
               return;
            }
         }
         else if ((x1 + vp[temp].first) > x)
         {
            r--;
         }
         else
         {
            l++;
         }
      }
      else
      {
         r--;
      }
   }
   cout << "IMPOSSIBLE\n";
   return;
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int t = 1;

   while (t--)
   {
      prasad();
   }
   return 0;
}
