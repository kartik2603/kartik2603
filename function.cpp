#include<iostream>
using namespace std;


    inline int cube(int);
    float cube(float,float,float);
    void cube(int);

    int  main()
    {
         cout<<cube(9)<<endl;
         cout<<cube(2.4,2.4,2.4)<<endl;
         cube.cube(4);
         return 0;
    }
      int cube(int a)
    {
        return  (a*a*a);
    }
    float cube(float a,float b,float c)
    {
        return (a*b*c);
    }
    void cube(int a)
    {
        cout<<a*a*a;
    }