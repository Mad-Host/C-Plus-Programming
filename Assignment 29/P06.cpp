// WAP to calculate the Average of Three Numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, avg;

    cout << "Enter Three Numbers : ";
    cin >> a >> b >> c;

    avg = (a + b + c) / 3.0;

    cout << "The Average of numbers is : " << avg;

    cout << endl;
    return 0;
}

/*

Enter Three Numbers : 12 52 89
The Average of numbers is : 51

*/
