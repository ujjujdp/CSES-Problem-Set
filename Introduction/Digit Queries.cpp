#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

unsigned long long int power(unsigned long long int n)
{
    unsigned long long int temp=1;
    while(n>0)
    {
        temp*=10;
        n--;
    }
    return temp;
}

unsigned long long int func(unsigned long long int number,unsigned long long int place,unsigned long long int digits)
{
    unsigned long long int x=digits-place-1;
    while(x--)
    {
        number/=10;
    }
    return number%10;
}
unsigned long long int digitQuery(unsigned long long int k)
{   
    if(k<=9)
        return k;
    unsigned long long int lastno = 0;
    unsigned long long int start = 1;
    unsigned long long int end = 9;
    unsigned long long int range_count = 2;
    while(1)
    {
        if(!(k<= end && k>=start))
        {
            start=end+1;
            end = end + 9*range_count*power(range_count-1);
            lastno = power(range_count-1);
            range_count++; 
            
        } 
        else
        {   
            range_count--; //Now range_count = no of digits
            unsigned long long int number= lastno + (k - start)/(range_count)  ;
            unsigned long long int place =  (k - start) % range_count;
            unsigned long long int res = func(number,place,range_count);
            return res;
        }       
    }
}
int main()
{   
    unsigned long long int q;
    cin>>q;
    while(q--)
    {
        unsigned long long int k;
        cin>>k;
        cout<<digitQuery(k)<<endl;
    }
    return 0;   
}