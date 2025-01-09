#include <iostream>
using namespace std;



int main()
{

    // important concepts

    // sizeof -> size_t
    // t -> time function, define in iostream library.

    cout<<sizeof(long long)<<endl;      // 8 bytes
    cout<<sizeof(size_t)<<endl;         // 8 bytes

    // cout<< numeric_limits<long long>::min()<<endl;
    // cout<< numeric_limits<long long>::min()<<endl;       
    // cout<< numeric_limits<size_t> :: min()<<endl;
    // cout<< numeric_limits<size_t> :: max()<<endl;


    // sizeof can store up to value unsigned long long.


    cout<<endl;
    return 0;
}