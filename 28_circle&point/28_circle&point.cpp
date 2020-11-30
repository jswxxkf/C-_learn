#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Point
{
private:
    int m_x;
    int m_y;

public:
    Point() // 可以带参数 可被重载
    {
        cout << "构造函数被调用" << endl;
    }
    ~Point() // 不可带参数 不可被重载
    {
        cout << "析构函数被调用" << endl;
    }
    void setX(int x)
    {
        m_x = x;
    }
    void setY(int y)
    {
        m_y = y;
    }
    int getX()
    {
        return m_x;
    }
    int getY()
    {
        return m_y;
    }
};

class Circle
{
private:
    int m_r;
    Point m_center;

public:
    void setR(int r)
    {
        m_r = r;
    }
    int getR()
    {
        return m_r;
    }
    void setCenter(Point center)
    {
        m_center = center;
    }
    Point getCenter()
    {
        return m_center;
    }
};

// 判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
                   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    int rDistance = c.getR() * c.getR();
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance > rDistance)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}

int main(int argc, char const *argv[])
{
    Circle c;
    Point center;
    center.setX(0);
    center.setY(0);
    c.setR(2);
    c.setCenter(center);
    Point p;
    p.setX(5);
    p.setY(0);
    isInCircle(c, p);
    return 0;
}
