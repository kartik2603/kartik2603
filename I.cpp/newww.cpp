#include <iostream>
using namespace std;

// Function overloading: different parameter lists
int cube(int a) {
    return a * a * a;
}
/*void cube(int b){
    cout<<b*b*b;
    }*/
void cube(int);
float cube(float a, float b, float c) {
    return a * b * c;
}

// Return type and no extra semicolon for main
int main() {
    cout << cube(9) << endl;
    cout << cube(2.4f, 2.4f, 2.4f) << endl;
    cube(4); // Calls the void cube function
    return 0;
}
   
 void cube(int b)
{    
    cout<<b*b*b;
}