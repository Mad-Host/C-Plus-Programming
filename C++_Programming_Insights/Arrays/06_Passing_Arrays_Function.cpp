#include <iostream>
using namespace std;

void printNumbers(int [], int);

int main()
{

    int num[] = {1, 2, 3, 200, 105};

    printNumbers(num, size(num));

    cout<<endl;
    return 0;
}

void printNumbers(int num[], int size)
{

    // int[] -> int *
    // we can't assign pointer to int.
    // for(int temp : num)
    //     cout<<temp<<" ";                 // Error!
    
    // for(int i=0; i<size(num); i++)       // Error!
    //     cout<<temp<<" ";


    // Alternative 
    // must provide the size of array, it's actually a good practice.

    cout<<"Values : ";
    for(int i=0; i<size; i++)
        cout<<num[i]<<" ";
    
}
