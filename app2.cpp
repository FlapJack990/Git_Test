#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int inp;
    cout << "Type\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> inp;
        arr[i] = inp;
    }
    cout << "==============================="<<endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}