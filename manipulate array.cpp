#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,a[100000],i,k,b[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0,k=0;k<n;i++,k+=2)
        {
            b[k]=a[i];
        }
        if(k==n-1)
        {
            k=n-2;
        }
        else
        {
            k=n-1;
        }
        for(;k>=0;i++,k-=2)
        {
            b[k]=a[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
