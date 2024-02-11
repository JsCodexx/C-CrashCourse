#include <iostream>
using namespace std;

int main()

{
    int a, b;
    cout << "Input two digits: ";
    cin >> a >> b;
    char op;
    cout << "press the operator for the operaion: " << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Sum is: " << a + b;
        break;
    case '-':
        cout << "difference is: " << a - b;
        break;
    case '/':
        cout << "divided ans is: " << a / b;
        break;
    case '%':
        cout << "Modulus is: " << a % b;
        break;
    case '*':
        cout << "Multiplication result is: " << a * b;
        break;

    default:
        cout << 'Am still learning more...';
        break;
    }
    return 0;
}