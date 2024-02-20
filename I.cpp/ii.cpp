#include<iostream>
using namespace std;
int main()
{
    int  total=1;
    int y,r;


    cout<<"Enter Number of Rows :";
    cin>>r;
    for(int x=1;x<=r;x++)
    {
        for(int j=r;j>x;j--)
        {
            cout<<"*";
        }
    
    for(y=1;y<=x;y++)
    {
        cout<<"-"<<total;
        total++;
        
    }
    cout<<endl;
    }
    return 0;
}