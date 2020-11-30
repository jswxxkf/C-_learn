#include <iostream>
using namespace std;
int main()
{
    int randNum = rand() % 20 + 1;
    cout << randNum << endl;
    // 玩家进行猜测
    int inputNum;
    while (true)
    {
        cin >> inputNum;
        if (inputNum > randNum)
        {
            cout << "猜大了" << endl;
        }
        else if (inputNum < randNum)
        {
            cout << "猜小了" << endl;
        }
        else
        {
            cout << "猜对了" << endl;
            break;
        }
    }
} // namespace std;
