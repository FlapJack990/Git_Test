#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int guessN = 7;
    int guessT = 0;
    int choose;
    cout << "You Have 3 Tries to Get The Lucky Number" << endl;
    while (true)
    {
        
        cin >> choose;
        if (choose == guessN)
        {
            cout << "Bravo" << endl;
            break;
        }
        else
        {
            guessT++;
            cout << "Failed" << endl;
        }
        if (guessT == 3)
        {
            cout << "Game over" << endl;
            break;
        }
    }

    return 0;
}