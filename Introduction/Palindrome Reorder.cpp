//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{   
    string s;
    getline(cin,s);
    int a[27]={0};
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-64]++;
    }
    int count=0;
    int index=-1;
    for(int i=1;i<=26;i++)
    {
        if(a[i]%2 == 1)
        {    
            index=i;
            count++;
        }
    }
    if(count>1)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    if(index==-1)
    {
        for(int i=1;i<=26;i++)
        {
            if(a[i])
            {
                for(int k=0;k<a[i]/2;k++)
                    cout<<(char)(i+64);
            }
        }
        for(int i=26;i>=1;i--)
        {
            if(a[i])
            {
                for(int k=0;k<a[i]/2;k++)
                    cout<<(char)(i+64);
            }
        }
    }
    else
    {
        for(int i=1;i<=26;i++)
        {
            if(a[i]>0 && a[i]%2==0)
            {
                for(int k=0;k<a[i]/2;k++)
                    cout<<(char)(i+64);
            }
        }
        for(int k=0;k<a[index];k++)
            cout<<(char)(index+64);
        for(int i=26;i>=1;i--)
        {
            if(a[i]>0 && a[i]%2==0)
            {
                for(int k=0;k<a[i]/2;k++)
                    cout<<(char)(i+64);
            }
        }
    }
    return 0;   
}