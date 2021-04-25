//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{   
    string s;
    getline(cin,s);
    int maxLen=0;
    int currLen=0;
    if (s.size() == 1)
    {
        cout<<"1";
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i-1])
        {
            maxLen=max(currLen,maxLen);
            currLen=0;
        }
        if(i==s.size()-1 && s[i]==s[i-1])
        {
            currLen++;
            maxLen=max(currLen,maxLen);
        }
        currLen++;
        // if(s[i]==s[i+1])
        // {
        //     currLen++;
        // }
        // else
        // {
        //     currLen=1;
        //     maxLen=max(currLen,maxLen);
        // }
    }
    cout<<maxLen;
    return 0;   
}