#include<iostream>
using namespace std;
class A
{
private:
    int b;
public:
    void set_data(int value);
    void get_data();
};
void A::set_data(int value)
{
    b = value;
}
void A::get_data()
{
    cout << b << endl;
}
main()
{
    A e, f, g, h;
    e.set_data(140);
    f.set_data(99);
    g.set_data(38);
    h.set_data(28);

    e.get_data();
    f.get_data();
    g.get_data();
    h.get_data();
}
