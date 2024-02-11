#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int poocketMoney = 3000;
    for (int date = 1; date < 30; date++)
    {
        if (date % 2 == 0)
        {
            // continue is to skip to the next itration of the loop
            // so only on odd days the user can go out
            continue;
        }
        cout << "you can go out for date: " << date << "you are left with" << poocketMoney << endl;
        poocketMoney = poocketMoney - 300;
        if (poocketMoney == 0)
        {
            cout << "no money sunny " << poocketMoney << endl;
            // break simply breaks the loop so if the user has no money he can't go
            break;
        }
    }

    return 0;
}