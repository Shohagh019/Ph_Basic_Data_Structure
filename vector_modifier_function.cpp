#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.insert(v.begin() + 2, 100); // insert an element
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v2 = {50, 60, 70};
    v.insert(v.begin() + 3, v2.begin(), v2.end()); // insert vector into vector
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.erase(v.begin() + 2); // erase an element
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.erase(v.begin() + 1, v.begin() + 3); // erase a portion
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "-----------------" << endl;
    vector<int> v3 = {1, 2, 2, 5, 10, 12, 2, 6, 7, 2};
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout<<endl;
    replace(v3.begin(), v3.end(), 2, 100); // replace 2 by 100 until last;
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout<<endl;
    vector<int> v4 = {1, 2, 2, 5, 10, 12, 2, 6, 7, 2};
    replace(v4.begin(), v4.end()-2, 2, 100); // replace 2 by 100 until given index;
    for (int x : v4)
    {
        cout << x << " ";
    }
    cout<<endl;
    cout<<"------------------"<<endl;
    vector<int> v5={1,3,5,7,10,9};
    auto it=find(v5.begin(),v5.end(),5);// find specefic element in vector;
    if(it==v5.end()) cout<<"Not found"<<endl;
    else cout<<"found"<<endl;
    return 0;
}