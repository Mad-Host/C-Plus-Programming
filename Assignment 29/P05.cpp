// WAP to calculate the Area of Cubiod.

#include<iostream>
using namespace std;

int main()
{

    int length, width, height;

    cout<<"Enter Length, Width and Height of Cubiod : ";
    cin>>length>>width>>height;

    cout<<"The Area of Cubiod is 2(lw + lh + wh): "<<2*(length*width + length*height + width*height);


    cout<<endl;
    return 0;
}

/*

Enter Length, Width and Height of Cubiod : 12 10 2
The Area of Cubiod is 2(lw + lh + wh): 328

*/







