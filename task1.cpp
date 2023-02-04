#include <iostream>
using namespace std;

main()
{
    int size;
    int total=0;
    float average=0;
    cout<<"Enter size of array: ";
    cin>>size;
    int numbers[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"Enter value for place "<<idx+1<<": ";
        cin>>numbers[idx];
        total=total+numbers[idx];

    }
   
    average=(total/size);
    cout<<"Average is: "<<average<<endl;
    cout<<"Total is: "<<total;


    
    

}