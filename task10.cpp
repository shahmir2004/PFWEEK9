#include <iostream>
using namespace std;

main()
{

    string name;
    int counter=0;
    getline(cin,name);
    int idx=name.length();
    for(int i=0; i<idx; i++)
    {
        if(name[i]=='a' || name[i]=='e' ||name[i]=='i' ||name[i]=='o' ||name[i]=='u')
        {
            counter++;
        }
    }

    cout<<counter;



}