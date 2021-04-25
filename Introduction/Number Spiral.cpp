//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

long int numberSpiral(long int a,long int b)
{
    if(a==1 && b==1)
        return 1;
    else if(a==b)
        return a*a-a+1;
    else
    {
        long int x=max(a,b);
        if(x%2 == 0)
        {
            x=numberSpiral(x,x);
            if(a<b)
                return x-(max(a,b)-min(a,b));
            else
                return x+(max(a,b)-min(a,b));
        }
        else
        {
            x=numberSpiral(x,x);
            if(a>b)
                return x-(max(a,b)-min(a,b));
            else
                return x+(max(a,b)-min(a,b));
        }
    }
    
}
int main()
{   
    long int t;
    cin>>t;
    while(t--)
    {
        long int x,y;
        cin>>x>>y;
        cout<<numberSpiral(x,y)<<endl;
    }
    return 0;   
}