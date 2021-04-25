#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

long int trailingZeros(long int n)
{
    int c=0;
    for (int i=5;;i*=5)
    {
        c += n/i;
        if(n/i == 0)
            break;
    }
    return c;
}

int main()
{   
    long int n;
    cin>>n;
    cout<<trailingZeros(n);
    return 0;   
}