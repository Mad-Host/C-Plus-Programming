#include <iostream>
using namespace std;


void sort(int [], int);

int main()
{

    int bubble[] = {4, 2, 3, 1};
    
    cout<<"\nBefore sorting : ";
    for(auto temp : bubble)
        cout<<temp<<" ";


    sort(bubble, size(bubble));
    cout<<"\nThe sorted Arrays are : ";
    for(auto temp : bubble)
        cout<<temp<<" ";


    cout<<endl;
    return 0;
}

void sort(int bubble[], int size)
{

    for(int pass=0; pass < size; pass++)
    {
        for (int i = 1; i < size; i++)
        {
            if (bubble[i - 1] > bubble[i])
            {
                int temp = bubble[i];
                bubble[i] = bubble[i - 1];
                bubble[i - 1] = temp;
            }
        }
    }
}

// OUTPUT :
// Before sorting : 4 2 3 1 
// The sorted Arrays are : 1 2 3 4 
