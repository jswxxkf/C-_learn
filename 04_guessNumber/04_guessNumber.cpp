#include <iostream>
using namespace std;
int main()
{
    int randNum = rand() % 20 + 1;
    cout << randNum << endl;
    // ��ҽ��в²�
    int inputNum;
    while (true)
    {
        cin >> inputNum;
        if (inputNum > randNum)
        {
            cout << "�´���" << endl;
        }
        else if (inputNum < randNum)
        {
            cout << "��С��" << endl;
        }
        else
        {
            cout << "�¶���" << endl;
            break;
        }
    }
} // namespace std;
