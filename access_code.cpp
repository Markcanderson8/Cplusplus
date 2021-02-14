#include <iostream>

using namespace std;

int main()
{
    string username;
    string password;
    int tries = 0;

    while(tries < 3)
    {
        tries++;
        
        cout << "Username: ";
        getline(cin, username);
        cout << "Password: ";
        getline(cin, password);
        
        
        if((username == "manderson") && (password == "Mollymavis1@6"))
        {
            cout << "Access Granted" << endl;
            cin.get();
            system("clear");
            break;
        }
        else
        {
            cout << "Either your username or password are incorrect..." << endl;
            continue;
        }
    }
    if(tries == 3)
    {
        system("clear");
        cout << "ACCESS DENIED!!" << endl;
        cout << "Contact your system administrator.  Account Locked!";
    }
    
    cout << '\n';

    return 0;
}


