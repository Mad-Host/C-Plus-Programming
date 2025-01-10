#include <iostream>
using namespace std;



int main()
{

    // C++ : Structured Binding
    // Javascript : Destructured
    // Python : Unpacking

    
    int cordinates[] = {102, 35, 54};
    auto[x, y, z] = cordinates;

    cout<<"cordinates are : "<<x<<" "<<y<<" "<<z;

    // Traditional Method.
    // int x, y, z;
    // x = cordinates[0];
    // y = cordinates[1];
    // z = cordinates[2];

    cout<<endl;
    return 0;
}
