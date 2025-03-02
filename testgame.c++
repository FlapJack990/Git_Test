#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    cout << "You Have 3 Tries to Get The Lucky Number" <<endl;
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int guessN = nums[6];
    int guessT = 3;
    cin >> guessN;
    
    for (int i = 0; i < 10; i++)
    {
        if (guessN != nums[6])
        {
            guessT--;
            cout << "You have " << guessT << " tries" << endl;
            if (guessT == 0)
            {
                cout << "Game Over" << endl;
                break;
            }
            cin >> guessN;
        }
        else if (guessN == nums[6])
        {
           cout << "You Are Luckey" <<endl;
           break;
        }
    }
    cout << "=======================================" <<endl;
   
    return 0;
}