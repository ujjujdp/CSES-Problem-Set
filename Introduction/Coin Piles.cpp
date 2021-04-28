#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool coinPiles(long long int a,long long int b)
{
    if(a<0 || b<0)
        return false;
    if(a==b && a%3==0)
    {   
        //cout<<"YES"<<endl;
        return true;  
    }
    else if(a==b && a%3!=0)
    {
        //cout<<"NO"<<endl;
        return false;
    }
    else if(a==2*b || b==2*a)
    {
        //cout<<"YES"<<endl;
        return true;  
    }
    else if(a>2*b || b>2*a)
    {       
        //cout<<"NO"<<endl;
        return false;  
    }
    else if(a>b)
    {
        int x=a-b;
        return coinPiles(a-2*x,b-1*x);
    }
        
    else    
    {
        int x=b-a;
        return coinPiles(a-1*x,b-2*x);
    }

}

int main()
{   
    long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        if(coinPiles(x,y))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;   
}