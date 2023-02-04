#include<iostream>
using namespace std;

main()
{

    string something="something ";
    string anystring;
    
    string result[2];

    cout<<"Enter any string: ";
    getline(cin, anystring);

    result[0]=something;

    result[1]=anystring;
    for(int i=0; i<2; i++)
    {
        cout<<result[i];
    }
    


}