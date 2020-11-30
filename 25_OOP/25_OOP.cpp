#include <iostream>
#include <string>
#include <ctime>
using namespace std;

const double PI = 3.14;

class Circle
{
    // 访问权限
public:
    int radius;
    double calcC()
    {
        return 2 * PI * radius;
    }
};

int main(int argc, char const *argv[])
{
    // 通过圆类创建具体的圆（对象）
    Circle circle;
    circle.radius = 10;
    cout << "c of circle:" << circle.calcC() << endl;
    return 0;
}
