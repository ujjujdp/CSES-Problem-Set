//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

// int fact(long int n)
// {
//     if(n==0 || n==1)
//         return 1;
//     else 
//         return n*fact(n-1);
// }
// long int ncr(long int n,long int r)
// {
//     return (fact(n)/(fact(n-r)*fact(r)));
// }

int main()
{   
    long long int n; 
    cin>>n;
    long long int sum=0;
    for (int i=1;i<=n;i++)
    {    
        if(i==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            sum += 8*(i-2);
            long long int x=i*i;
            cout<<x*(x-1)/2-sum<<endl;
        }
    }
    return 0;   
}