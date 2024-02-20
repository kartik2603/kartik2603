#include<iostream>
using namespace std;
int main()
{
  
    int total=1;
    int num;

    cout<<"Enter Number of rows :";
    cin>>num;
    for(int x=1;x<num;x++)
    {
        for(int y=num;y>x;y--)
        {
            cout<<" ";
        }
        for(int z=1;z<=x;z++)
        {
            cout<<" "<<total;
            total++;
        }
    cout<<endl;
    }
    return 0;
}