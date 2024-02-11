#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    // print the prime numbers between the given range
    int a, b;
    cin >> a >> b;
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << "number is prime: " << num << endl;
        }
    }
    return 0;
}