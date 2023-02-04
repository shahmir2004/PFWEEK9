#include <iostream>
using namespace std;

main()
{

    int size;
    cout << "Enter array size: ";
    cin >> size;
    int number;
    int numbers[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter value for place " << idx + 1 << ": ";
        cin >> numbers[idx];
    }
    cout<<"ENter number you want to multipy with: ";
    cin>>number;
    for (int idx = size - 1; idx >= 0; idx--)
    {
        cout << numbers[idx]*number << endl;
    }
}