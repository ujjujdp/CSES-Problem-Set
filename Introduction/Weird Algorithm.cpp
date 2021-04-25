//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{   
    long int n;
    cin>>n;
    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2)
        {
            n= n*3 + 1;
        }
        else
        {
            n/=2;
        }
    }
    cout<<n;
    return 0;   
}