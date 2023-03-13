#include <iostream>

using namespace std;

int main()
{
    int ar[]={1,3,20,4,1,10,8};
    int n=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<n-2;i++)
    {
        if(ar[i+1]>ar[i] && ar[i+1]>ar[i+2])
        {
            cout<<ar[i+1]<<" ";
        }
    }
}
