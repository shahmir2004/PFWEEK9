#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;
    bool flag=false;
    getline(cin,name);
    int idx=name.length();
    cout<<"Enter letter: ";
    cin>>letter;
    if(letter==name[idx-1])
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }


}