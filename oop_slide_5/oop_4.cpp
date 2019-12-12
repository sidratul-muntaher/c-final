#include<iostream>
using namespace std;
class abc;
class xyz
{
    int x;
public:
    void set_value(int i)
    {
        x = i;
    }
    friend void maxx(xyz, abc);
};
class abc
{
    int a;
public:
    void set_value(int i )
    {
        a = i;
    }
    friend void maxx(xyz, abc);
};
void maxx(xyz m, abc n)
{
    if(m.x > n.a)
    {
        cout << m.x;
    }
    else cout << n.a;
}
main()
{
    xyz ob1;
    ob1.set_value(10);
    abc ob2;
    ob2.set_value(20);
    maxx(ob1, ob2);
}
