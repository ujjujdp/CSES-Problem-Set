#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

void PairSum(vector<int> a,int n,int k)
{
    vector<int> temp=a;
    sort(a.begin(),a.end());
    cout<<endl;
    int l=0;
    int r=n-1;
    int ps=0;
    int flag=0;
    while(l<r)
    {   ps=0;
        ps=a[l]+a[r];
        if (ps==k)
        {    
            flag=1;
            break;
        }
        else if(ps<k)
            l++;
        else 
            r--;
    }
    if(flag==0)
        cout<<"IMPOSSIBLE";
    else
    {
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]==a[l] || temp[i]==a[r])
                cout<<i+1<<" ";
        }
    }
}

int main()
{
    int n; 
    int k;
    cin>>n>>k;
    vector<int> arr;
    int i;
    for (i=0; i<n ; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    PairSum(arr,n,k);
    return 0;   
}   