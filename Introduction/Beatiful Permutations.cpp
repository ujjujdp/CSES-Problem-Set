//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

void perm(int n)
{
    if(n==1)
    {
        cout<<"1";
        return;
    }
    if(n<=3)
    {
        cout<<"NO SOLUTION";
        return;
    }
    int n1=n;
    int x=n-1;
    for(int i=0;i<n1;i++)
    {
        if(x-2*i > 0  )
        {
            cout<<x-2*i<<" ";
        }
        else
        {
            cout<<n<<" ";
            n-=2;
        }
    }
}
int main()
{   
    int n;
    cin>>n;
    perm(n);
    return 0;   
}