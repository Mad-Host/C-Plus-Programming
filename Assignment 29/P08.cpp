// WAP to take input of Array size 10 sum of all the number and print the result.

#include<iostream>
using namespace std;

void input(int[], int);
void display(int[], int);
int sum(int[], int);

int main()
{
    int size;
    cout<<"The Array Size : ";
    cin>>size;
    
    int arr[size];
    input(arr, size);
    display(arr,size);
    cout<<"\nThe sum of Numbers is : "<<sum(arr, size);

    cout<<endl;
    return 0;
}

void input(int arr[], int size)
{
    cout<<"Enter Numbers : ";
    for(int i=0; i<size; i++)
        cin>>arr[i];
}

void display(int arr[], int size)
{
    for(int i=0; i<size; i++)
        cout<<arr[i]<< " ";
}

int sum(int arr[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
        sum = sum + arr[i];
    return sum;
}


/*

The Array Size : 10
Enter Numbers : 10 20 30 40 50 60 70 80 90 100
10 20 30 40 50 60 70 80 90 100 
The sum of Numbers is : 550

*/