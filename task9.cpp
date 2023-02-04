#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;
    int c=0;
    bool flag=false;
    getline(cin,name);
    int idx=name.length();
    cout<<"Enter letter: ";
    cin>>letter;
    for(int i=idx-1; i>=0; i--)
    {
        if(letter==name[i])
        {
            c=c+1;
        }
    }
    cout<<"The letter occured: "<<c<<" times";


}