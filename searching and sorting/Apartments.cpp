#include <bits/stdc++.h>
using namespace std;

void prasad()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr1[m];
    for (int i = 0; i < m; i++)
        cin >> arr1[i];

    sort(arr, arr + n);
    sort(arr1, arr1 + m);

    int count = 0;
    int i = 0, j = 0;
    while (i < n)
    {
       while (j < m && arr1[j] < arr[i] - k)
            j++;
        if(j<m && i<n && ((abs(arr[i] - arr1[j])) <= k))
        {
            count++;    
            i++;
            j++;
        }
        else i++;
        
    }
   cout<<count<<endl;
}
int main()
{
    prasad();
    return 0;
}