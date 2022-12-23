#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter your age: ";
    cin >> a;
    if(a<=25)
    {
    int b;
    cout << "Enter your height: ";
    cin >> b;
        if(b<100)
        {
        cout << "Your character = Chopper";
        return 0;
        }
        else if(b<180)
        {
        cout << "Your character = Usopp";
        return 0;
        }
        else{
        int c;
        cout << "Enter your bounty: ";
        cin >> c;
        if(c>1100000000)
        {
        cout << "Your character = Zoro";
        }
        else
        {
         cout << "Your character = Sanji";
        }}
    }
    else if(a<=60)
    {
    int e;
        cout << "Enter your bounty: ";
        cin >> e;
    if(e>500000000)
    {
    cout << "Your character = Jinbe";
    }
    else
    {
    cout << "Your character = Franky";
    }
    }
    else
    {
    cout << "Your character = Brook";
}
}

