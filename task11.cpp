#include <iostream>
using namespace std;

main()
{
    int array2elements;
    int array1[2];
    int array3idx;

    cout<<"Enter elements in array 2: ";
    cin>>array2elements;

    int array2[array2elements];
    array3idx=array2elements+2;

    int array3[array3idx];

    for(int i=0; i<2; i++)
    {
        cout<<"Enter number "<<i+1<<" of array 1: ";
        cin>>array1[i];
    }
    
    for(int i=0; i<array2elements; i++)
    {
        cout<<"Enter number at position "<<i+1<<" of array 2: ";
        cin>>array2[i];

    }

    array3[0]=array1[0];

    for(int i=1; i<array3idx-1; i++)
    {
        array3[i]=array2[i-1];
    }
    array3[array3idx-1]=array1[1];

    for(int i=0; i<array3idx; i++)
    {
        cout<<array3[i]<<" ";
        
    }
    

}