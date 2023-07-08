#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the size of the element: ";
    cin>>size;
    cout<<" Enter "<<size<<" Elements : ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"The updated array is : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}