#include<iostream>
using namespace std;

main()
{
    int size;
    int number;
    bool isFound= false;
    int c=0;
    cout<<"Enter array size: ";
    cin>>size;

    int numbers[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"Enter value at place "<<idx+1<<": ";
        cin>>numbers[idx];
    }
    cout<<"Enter number you want to find: ";
    cin>>number;
    for(int idx=0; idx<5; idx++)
    {
        if(number==numbers[idx])
        {
            isFound= true;
            break;
        }

    }
    if(isFound)
    {
        cout<<"Number found";
    }
    else
    {
        cout<<"Not found";
    }
    
    

}
