#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>v={1,2,3,4,5,6,7,8};
    auto it=v.lower_bound(3);
    cout<<*it<<endl;
}