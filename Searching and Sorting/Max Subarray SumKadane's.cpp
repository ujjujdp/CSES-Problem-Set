//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

long int max(long int a[],long int n)
{
    long int m=INT_MIN;
    for(long int i=0;i<n;i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return m;

}
long int maxSubarraySum(long int a[],long int n)
{
        long int sum=0;
        long int maxSum=INT_MIN;
        long int flag=0;
        for(long int i=0;i<n;i++)
        {   
            if(a[i]>0)
                flag=1;
            sum += a[i];
            if(sum<0)
                sum=0;  
            maxSum=max(maxSum,sum);
        }
        if(flag==0)
            return (max(a,n));
        return maxSum;
}

int main()
{           
    long int n;
    cin>>n;
    long int arr[n];
    long int i=0;
    for (i=0; i<n ; i++)
         cin>>arr[i];
    cout<<maxSubarraySum(arr,n);
    return 0;   
}   