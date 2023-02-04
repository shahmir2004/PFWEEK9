#include <iostream>
using namespace std;

main()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int numbers[size];

    for(int idx=0; idx<size; idx++)
    {
        cout<<"Enter value for place "<<idx+1<<": ";
        cin>>numbers[idx];

    }

    for(int idx=size-1; idx >= 0; idx--)
    {
        cout<<numbers[idx]<<endl;
    }


}