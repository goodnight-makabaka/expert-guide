#include <iostream>
#include <cmath>
using namespace std;
//创建一个类 Vector，包含两个私有成员变量 x 和 y，表示向量的两个分量
class Vector
{
private:
    double x, y;

public:
    //提供一个构造函数来初始化这两个成员变量
    Vector() : x(0), y(0) {}

    Vector(double x_, double y_) : x(x_), y(y_) {}

    //提供一个公共方法 add，该方法接受另一个 Vector 对象作为参数，并返回一个新的 Vector 对象，表示两个向量的和
    Vector add(const Vector& temp)
    {
        return Vector(this->x + temp.x, this->y + temp.y);
    }

    //提供一个公共方法 print，用于打印向量的分量
    void print() const
    {
        cout << "Vector(" << this->x << ", " << this->y << ")" <<endl;
    }

    //提供一个方法dir，求取向量的模长并打印
    void dir() const
    {
        double magnitude = sqrt(x * x + y * y);
        cout << "The magnitude of vector: " << magnitude <<endl;
    }
};

int main()
{
    Vector v1(3.0, 4.0);
    Vector v2(5.0, 12.0);

    cout << "Vector 1: ";
    v1.print();
    cout << "Vector 2: ";
    v2.print();

    Vector v3 = v1.add(v2);
    cout << "Vector 1 + Vector 2 = ";
    v3.print();

    v1.dir();
    v2.dir();
    v3.dir();

    return 0;
}
