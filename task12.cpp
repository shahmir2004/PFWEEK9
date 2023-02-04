#include <iostream>
using namespace std;

main()
{

    float money[4];
    string type;
    float price;
    float moneyindollars;

    for(int i=0; i<4; i++)
    {
        if(i==0)
        {
            type="quarter";
        }
        else if(i==1)
        {
            type="dime";
        }
        else if(i==2)
        {
            type="nickels";
        }
        else if(i==3)
        {
            type="pennies";
        }
        
        cout<<"Enter amount of "<<type<<" : ";
        cin>>money[i];
    }
    
    cout<<"Enter price of item in dollars: ";
    cin>>price;
    moneyindollars=(money[0]*0.25)+(money[1]*0.1)+(money[2]*0.05)+(money[3]*0.01);

    if(moneyindollars>=price)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}