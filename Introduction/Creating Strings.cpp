#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void permute(string s,int idx)
{
    if(idx==s.length())
    {
        res.push_back(s);
        return;
    }
    for(unsigned int i=idx ; i<s.length() ; i++)
    {
        if(i!=idx && s[i]==s[idx])
            continue;
        swap(s[i],s[idx]);
        permute(s,idx+1);
        // swap(s[i],s[idx]);
    }
}
int main()
{
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    permute(s,0);
    cout<<res.size()<<endl;
    sort(res.begin(),res.end());
    for(auto i : res)
    {
        for(auto j : i)
            cout<<j;
        cout<<endl;
    }
    return 0;   
}