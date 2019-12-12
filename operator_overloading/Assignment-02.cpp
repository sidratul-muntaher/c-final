#include<iostream>
using namespace std;
class test
{
    int x;
public:
    test()
    {
        x = 0;
    }
    test(int a)
    {
        x = a;
    }
    void display()
    {
        cout << x << endl;
    }
    test operator -(test s)
    {
        test temp;
        temp.x = this->x - s.x;
        return temp;
    }
};

main()
{
    test ob1(80), ob2(50), ob3;
    ob3 = ob1 - ob2;
    ob1.display();
    ob2.display();
    ob3.display();
}
