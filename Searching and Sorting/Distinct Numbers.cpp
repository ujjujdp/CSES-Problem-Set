#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int distinctNumbers(vector<int> a,int n)
{
    sort(a.begin(),a.end());   
    int c=1;
    for(int i=0;i<n-1;i++)
        if(a[i]!=a[i+1])
            c++;
    return c;
}
int main()
{
    int n; 
    cin>>n;
    vector<int> arr;
    int i;
    for (i=0; i<n ; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<distinctNumbers(arr,n);
    return 0;   
}   