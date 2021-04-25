//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long int c=0;
    long long int x=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            x=arr[i-1] - arr[i];
            c+=x;
            arr[i]+=x;
            x=0;
        }
    }
    cout<<c;
    return 0;   
}