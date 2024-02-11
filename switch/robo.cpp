#include <iostream>
using namespace std;

int main()

{
    char button;
    cout << "input the first latter for the language: " << endl;
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "Hi this is A lang";
        break;
    case 'b':
        cout << "Hi this is B lang";
        break;
    case 'c':
        cout << "Hi this is C lang";
        break;
    case 'e':
        cout << "Hi this is E lang";
        break;
    case 'f':
        cout << "Hi this is F lang";
        break;

    default:
        cout << 'Am still learning more...';
        break;
    }
    return 0;
}