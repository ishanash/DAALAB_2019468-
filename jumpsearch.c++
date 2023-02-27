#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> v;
    int n,c=0;
    cout<<"Input Size-\n";
    cin>>n;
    v.resize(n);
    int end=sqrt(n);
    cout<<"Input all elements-\n";
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int start=0;
    int key;
    cout<<"Key Please-\n";
    cin>>key;
    while (v[end]<=key && end<n)
    {
        start=end;
        end+=sqrt(n);
        if (end>n-1)
        end=n;
    }
    for (int i=start;i<n;i++)
    {
        if (v[i]==key)
        {
            c++;
            cout<<"Element found-\n"<<i;
            break;
        }
    }
    if(c==0)
    cout<<"Element Not Found!";
    return 0;
}
