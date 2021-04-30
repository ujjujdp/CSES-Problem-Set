//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

bool isPower2(int n)
{
    if((n & n-1 )==0)
        return true;
    return false;
    // return (n && ~(n&(n-1)));
}

long int find(int n)
{
    int t=log2(n);
    int a=n-(1<<t);
    int b=(1<<(t+1))-n;
    // cout<<"   "<<a<<" , "<<b<<endl;
    return min(a,b);
}
int main()
{   
    int n;
    cin>>n;
    long int k=1<<n;
    int arr[n]={0};
    int x=0;
    for(long int i=1;i<=k;i++)
    {
        for(long int q=n-1;q>=0;q--)
            cout<<arr[q];
        if(i%2==1)
            arr[0]=1-arr[0];
        else
        {   
            if(isPower2(i))
            {   x = log2(i);
                arr[x]=1-arr[x];
            }           
            else
            {   
                int z=i;
                long int l=0;
                for(;;)
                {
                    l=find(z);
                    z=l;
                    if(isPower2(l))
                        break;
                }
                x=log2(l);
                arr[x]=1-arr[x];
            }
        }
        cout<<endl;
    }
    return 0;

}