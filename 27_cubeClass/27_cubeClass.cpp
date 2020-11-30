#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Cube
{
private:
    int m_l;
    int m_w;
    int m_h;

public:
    // 设置长宽高
    void setL(int l)
    {
        m_l = l;
    }
    void setW(int w)
    {
        m_w = w;
    }
    void setH(int h)
    {
        m_h = h;
    }
    // 获取长宽高
    int getL()
    {
        return m_l;
    }
    int getW()
    {
        return m_w;
    }
    int getH()
    {
        return m_h;
    }
    // 获取立方体面积
    int calcSquare()
    {
        return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_l * m_h;
    }
    // 获取立方体体积
    int calcVolume()
    {
        return m_l * m_w * m_h;
    }
    bool isSameByCls(Cube &c)
    {
        if (m_l == c.getL() && m_w == c.getW() && m_h == c.getH())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// 利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);
    cout << c1.calcSquare() << endl;
    cout << c1.calcVolume() << endl;
    Cube c2;
    c2.setL(9);
    c2.setW(10);
    c2.setH(10);
    cout << isSame(c1, c2) << endl;
    cout << c1.isSameByCls(c2) << endl;
    return 0;
}
