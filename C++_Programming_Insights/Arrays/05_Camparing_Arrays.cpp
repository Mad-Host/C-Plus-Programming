#include <iostream>
using namespace std;


int main()
{
    bool isEqual = true;

    int pre[] = {1, 2, 3, 200, 105};

    int curr[] = {1, 2, 3, 200, 105};

    // camparing arrays.
    for(int i=0; i<size(pre); i++)
        if(pre[i] != curr[i])
        {
            isEqual = false;
            break;              
        }

    cout<<"So, Arrays are Equal ?"<<endl;
    cout<<boolalpha<<isEqual;

    cout<<endl;
    return 0;
}