#include "iostream"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int c=0;
    int arr[n];
    for(int i=m;i<n;i++)
    {
        arr[c]=ar[i];
        c++;
    }
    for(int i=0;i<m;i++)
    {
        arr[c+i]=ar[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
