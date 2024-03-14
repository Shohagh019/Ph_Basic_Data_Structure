#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);         // prefix sum array;
    pre[0] = v[0];              // first element of given array and prefix array must be same
    for (int i = 1; i < n; i++) // start from second element
    {
        pre[i] = pre[i - 1] + v[i];
    }
    // for(int i=0; i<n; i++)
    // {
    //     cout<<pre[i]<<" ";
    // }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // int sum = 0;
        // for (int i=l-1; i<=r-1; i++)
        // {
        //     sum+=v[i];
        // }
        // cout<<sum<<endl; // brute force way
        /*optimized way*/
        int sum;
        if (l <= 1)
        {
            sum = pre[r - 1]; // l==1 means range start from 0 index
        }
        else
        {
            sum = pre[r - 1] - pre[l - 1];
        }
        cout << sum << endl;
    }
    return 0;
}
