/*given 2 numbers N and Q , array A of N numbers
 and Q queries each one contain a number X
 find X is present in the array or not*/
 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
     int n,q;
     cin>>n>>q;
     int a[n];
     for(int i=0; i<n; i++)
     {
        cin>>a[i];
     }
     sort(a,a+n);
     while(q--)
     {
        int x;
        cin>>x;
        int l=0; 
        int r=n-1;
        bool flag= false;
        while(l<=r)
        {
            int mid_index=(l+r)/2;
            if(x==a[mid_index])
            {
                flag= true;
            }
            if(x>a[mid_index])
            {
                //go to right
                l=mid_index+1;
            }
            else
            {
                r=mid_index-1;
            }
        }
        if(flag) cout<<"found"<<endl;
        else cout<<"Not foung"<<endl;
     }
     
     return 0;
 }