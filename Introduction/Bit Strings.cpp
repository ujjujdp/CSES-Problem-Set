#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;


int main()
{   
    unsigned long long int n;
    cin>>n;
    unsigned long long int res=1;
    unsigned long long int x=1000000007;
    for(int i=0;i<n;i++)
    {
        res *= 2;
        res = (res)%x;
    }
    cout<<res;
    return 0;   
}