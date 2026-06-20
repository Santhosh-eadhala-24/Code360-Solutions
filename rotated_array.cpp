#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& a, int k)
{
    vector<int> tmp;
    int m=a.size();
    k=k%m;
    for(int i=0;i<k;i++)
        tmp.push_back(a[i]);
    for(int i=k;i< m;i++)
    {
        a[i-k] = a[i];
    }
    for(int i=0;i<k;i++)
        a[m-k+i] = tmp[i];        
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    rotate(a,k);
    cout<<"after rotating : ";
    for(auto i:a)
        cout<<i<<" ";
    return 0;
}