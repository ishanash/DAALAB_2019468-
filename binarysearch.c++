#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    vector <int> v;
    int n;
    cout<<"Number of elements-\n";
    cin>>n;
    int a;
    cout<<"Input all the elements-\n";
    for (int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort (v.begin(),v.end());
    int z,f=0,i=0;
    cout<<"Input the desired element to be searched-\n";
    cin>>z;
    while (i<=n)
    {
        int mid=(i+n)/2;
        if (z<v[mid])
        n=mid-1;
        else if (z>v[mid])
        i=mid+1;
        else
        {
            f++;
            break;
        }
    }
    if (f==0)
    cout<<"not Found.\n";
    else
    cout<<"Found.\n";
    cout<<"Hello World";

    return 0;
}
