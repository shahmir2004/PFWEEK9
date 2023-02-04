#include <iostream>
using namespace std;

main()
{
    string name;
    cout<<"Tell string: ";
    getline(cin,name);

    int counter=name.length();

    for(int i=counter-1; i>=0; i--)
    {
        cout<<name[i];
    }

}