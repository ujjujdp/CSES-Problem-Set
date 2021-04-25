#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void TOH(long int n,char src,char aux,char des)
{
    if(n==1)
        cout<<src<<" "<<des<<endl;
    else
    {
        TOH(n-1,src,des,aux);
        cout<<src<<" "<<des<<endl;
        TOH(n-1,aux,src,des);
    }
}

int main()
{   long int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    TOH(n,'1','2','3');
    return 0;   
}