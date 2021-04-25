//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int arr[n]={0};
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        int x=0;
        cin>>x;
        arr[i]=x;
        a[x-1]++;
    }
    for(int i=0;i<n;i++)
        if(a[i]==0)
            cout<<i+1;
    return 0;   
}