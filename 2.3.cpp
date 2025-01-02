#include <iostream>
#include <windows.h>
using namespace std;

// Base class
class Shape
{
public:
    virtual void draw() const
    { // Virtual function
        cout << "绘制一个形状。" << endl;
    }
};

// Derived class: Circle
class Circle : public Shape
{
public:
    void draw() const override
    { // Override base class method
        cout << "绘制一个圆形。" << endl;
    }
};

// Derived class: Rect
class Rect : public Shape
{
public:
    void draw() const override
    {
        cout << "绘制一个矩形。" << endl;
    }
};

void render(const Shape &shape)
{
    shape.draw(); // Call the appropriate draw method based on the actual object type
}

int main()
{
    // Set console output to UTF-8 encoding
    SetConsoleOutputCP(CP_UTF8);

    Circle circle;
    Rect rect;

    render(circle);    // Output: 绘制一个圆形。
    render(rect);      // Output: 绘制一个矩形。

    return 0;
}