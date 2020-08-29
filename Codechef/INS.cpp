#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char c;
        cin >> c;
        switch (tolower(c))
        {
        case 'b':
            cout << "BattleShip"
                 << "\n";
            break;
        case 'c':
            cout << "Cruiser"
                 << "\n";
            break;
        case 'd':
            cout << "Destroyer"
                 << "\n";
            break;
        case 'f':
            cout << "Frigate"
                 << "\n";
            break;
        }
    }
    return 0;
}