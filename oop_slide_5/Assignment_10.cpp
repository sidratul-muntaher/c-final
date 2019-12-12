#include<iostream>
using namespace std;
class getd;
class getC
{
    int x;
public:
    void set_value(int i)
    {
        x = i;
    }
    friend void add(getC, getd);
};
class getd
{
    int a;
public:
    void set_value(int i )
    {
        a = i;
    }
    friend void add(getC, getd);
};
void add(getC m, getd n)
{
    cout << m.x + n.a << endl;
}
main()
{
    getC ob1;
    ob1.set_value(10);
    getd ob2;
    ob2.set_value(20);
    add(ob1, ob2);
}

