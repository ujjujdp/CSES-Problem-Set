#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int digitQuery(unsigned long long int k)
{   
    int i=0;
    while(1)
    {
        int a=9*(i+1)*pow(10,i);
        int b=a=9*(i+2)*pow(10,i+1);
        if(k>a && k<b)
            break;
    }
    
}
int main()
{   
    int q;
    cin>>q;
    while(q--)
    {
        unsigned long long int k;
        cin>>k;
        cout<<digitQuery(k)<<endl;
    }
    return 0;   
}