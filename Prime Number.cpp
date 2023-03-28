#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    bool b=true;
    cin>>n;
    if(n==0 || n==1)
    {
        cout<<"yes";
        exit(0);
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"no";
                b=false;
                exit(0);
            }
        }
    }
    if(b)
    {
        cout<<"yes";
        exit(0);
    }
}
