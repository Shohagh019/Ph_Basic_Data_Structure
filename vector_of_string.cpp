#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // vector<string> v;
    // for(int i=0; i<n; i++)
    // {
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }
    // for(string x:v)
    // {
    //     cout<<x<<endl;
    // }
    vector<string> v2(n);
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        getline(cin,v2[i]);
    }
    for(string x:v2)
    {
        cout<<x<<endl;
    }
    return 0;
}