#include <iostream>
using namespace std;

struct PlayerInfo
{
    int skill_level;
    string name;
};

int main()
{
    PlayerInfo players[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter the name of player : " << i << endl;
        cin >> players[i].name;

        cout << "Please enter the skill level for  : " << players[i].name << endl;
        cin >> players[i].skill_level;
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout << players[i].name <<" is at skill level " << players[i].skill_level <<endl;
    }
    
}
