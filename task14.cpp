#include <iostream>
using namespace std;

int main()
{

    string anystring;
    char removechar;
    cout << "Enter any string: ";
    getline(cin, anystring);

    
    int checkchange=0;
    int i=0;
    int j;

    int idx = anystring.length();

    while(anystring[i]!='\0')
    {
        checkchange=0;
        if(anystring[i]=='a'||anystring[i]=='e'||anystring[i]=='i'||anystring[i]=='o'||anystring[i]=='u')
        {
            j=i;
            while(anystring[j-1]!='\0')
            {
                anystring[j]=anystring[j+1];
                j++;
            }
            checkchange=1;
        }
        if(checkchange==0)
        {
            i++;
        }
    }



    cout << anystring;
    return 0;
}