// Implement the linear search algorithm
// Q) Create a function for living a value in an integer array.
// If the target value exists, return it's index otherwise return -1.

#include <iostream>
using namespace std;

int findNumber(int [], size_t, int);

int main()
{

    int val;
    int sequence[] = {1, 2, 3, 4, 5, 10, 12, 20};

    cout<<"\nArray : ";
    for(auto temp : sequence)
        cout<<temp<<" ";

    cout<<"\nSearch Number ? ";
    cin>>val;

    cout<<"\nat Index : "<<findNumber(sequence, size(sequence), val);

    cout<<endl;
    return 0;
}

int findNumber(int num[], size_t size, int val)
{
    for(int i=0; i<size; i++)
    {
        if(num[i] == val)
            return i;
    }   

    return -1;
}




