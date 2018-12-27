#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point *p3 = new Point;
    p3->xpos = p1.xpos + p2.xpos;
    p3->ypos = p1.ypos + p2.ypos;
    return *p3;
}


int main()
{
    Point *p1 = new Point;
    Point *p2 = new Point;

    cout << "point1(x) = ";
    cin >> p1->xpos;
    cout << "point1(y) = ";
    cin >> p1->ypos;

    cout << "point2(x) = ";
    cin >> p2->xpos;
    cout << "point2(y) = ";
    cin >> p2->ypos;

    Point &p3 = PntAdder(*p1, *p2);

    cout << "point3(x, y) = " << p3.xpos << ", " << p3.ypos << endl;

    delete p1;
    delete p2;
    delete &p3;
}
