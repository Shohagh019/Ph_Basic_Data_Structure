#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2(6); // type  2, 6 is size here;
    vector<int> v3(5,6); // type three: 5 is value and 6 is size;
    vector<int> v4(v3); // type 4: copy vector to vector;
    int a[6]={1,2,3,4,5,6};
    vector<int> v5(a,a+6); // type 5: copy array to vector;
    for(int i=0; i<6; i++)
    {
        cout<<v5[i]<<endl;
    }

    return 0;
}