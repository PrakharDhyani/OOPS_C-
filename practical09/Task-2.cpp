#include <iostream>
using namespace std;
class quad
{
public:
    int length;
    int breadth;
    quad(int x, int y)
    {
        length = x;
        breadth = y;
    }
    quad(int x)
    {
        length = x;
        breadth = x;
    }
    void printArea()
    {
        cout << "Area is :" << length * breadth << endl;
    }
};

int main()
{
    quad rec(10, 20);
    quad sqaure(10);
    rec.printArea();
    sqaure.printArea();
}