#include<iostream>
using namespace std;
class test
{
    int e, f, g;
public:
    void getData(int x, int y, int z)
    {
        e = x;
        f = y;
        g = z;
    }
    void display()
    {
        cout << e << endl;
        cout << f << endl;
        cout << g << endl << endl;
    }
    test operator -()
    {
        this->e = -e;
        this->f = -f;
        this->g = -g;

    }
};
main()
{
    test obj;
    obj.getData(-50, 88, -19);
    obj.display();
    -obj;
    obj.display();

}
