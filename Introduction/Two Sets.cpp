//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

void twoSets(int n)
{  
    
    if(n==0 || n%4 == 1 || n%4 ==2)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        if(n%4==0)
        {
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=1;i<=n;i++)
            {
                if(i<=n/4 || i>3*n/4)
                    cout<<i<<" ";
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(int i=1;i<=n;i++)
            {
                if(!(i<=n/4 || i>3*n/4))
                    cout<<i<<" ";
            }
        }
        else if(n%4==3)
        {   int k=n;
            cout<<"YES"<<endl;
            cout<<n/2+1<<endl;
            cout<<"1 2 ";
            n-=3;
            for(int i=1;i<=n;i++)
            {
                if(i<=n/4 || i>3*n/4)
                    cout<<i+3<<" ";
            }
            cout<<endl;
            cout<<k/2<<endl;
            cout<<"3 ";
            for(int i=1;i<=n;i++)
            {
                if(!(i<=n/4 || i>3*n/4))
                    cout<<i+3<<" ";
            }
        }
    }
}
int main()
{   
    long int n;
    cin>>n;
    twoSets(n);
    return 0;   
}