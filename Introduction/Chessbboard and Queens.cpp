#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int c=0;
bool is_valid(char arr[8][8],int sol[8][8],int x,int y)
{
    if(arr[x][y]=='*')
        return false;
    for(int i=0;i<x;i++)
    {
        if(sol[i][y]==1)
            return false;
    }
    for(int i=x,j=y;i>=0 && j>=0;i--,j--)
    {
        if(sol[i][j]==1) 
            return false;
    }
    for(int i=x,j=y ; i>=0  && j<8 ; i--,j++)
    {   
        if(sol[i][j]==1)
            return false;
    }
    return true;
}

void chessandqueens(char arr[8][8], int sol[8][8], int x)
{
    if(x==8)
        c++;
    
    for(int j=0;j<8;j++)
    {
        if(is_valid(arr,sol,x,j))
        {
            sol[x][j]=1;
            chessandqueens(arr,sol,x+1);
            sol[x][j]=0;
            
        }
    }
}

int main()
{
    char arr[8][8];
    int sol[8][8];
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)        
        { 
            cin>>arr[i][j];   
            sol[i][j]=0;
        }
    chessandqueens(arr,sol,0);
    cout<<c;
    return 0;   
}