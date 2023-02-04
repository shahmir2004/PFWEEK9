#include <iostream>
using namespace std;

main()
{
    int size;
    int smallest;
    cout<<"Enter array size ";
    cin>>size;

    int numbers[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"Enter value for place "<<idx+1<<" ";
        cin>>numbers[idx];
    }
    for(int idx=0; idx<size; idx++)
    {
        smallest=numbers[idx];
        if(numbers[idx]<numbers[idx+1])
        {
            smallest=numbers[idx];
        }
    }
    cout<<smallest;


}