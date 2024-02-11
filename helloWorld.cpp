#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout << "Enter the number it should be positive :" << endl;
    int userNumber;
    cin >> userNumber;
    while (userNumber >= 0)
    {
        cout << userNumber << endl;
        cout << "Enter the number again:" << endl;
        cin >> userNumber;
    }
    cout << userNumber << "you enterd the negative number" << endl;
    return 0;
}