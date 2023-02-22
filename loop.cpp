#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password;

    while (1)
    {
        cout << "Please enter your password : ";
        cin >> password;
        if(password == "baby"){
            break;
        }
    }
    cout << "You made it idiot";    
    
}