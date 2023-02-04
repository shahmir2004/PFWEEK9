#include <iostream>
using namespace std;

main()
{
    string name;
    cout<<"Tell the string: ";
    getline(cin,name);
    int idx=0;
    int count=0;
    while(name[idx]!='\0')
    {
        count=count+1;
        idx++;
    }

    if(count%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
}