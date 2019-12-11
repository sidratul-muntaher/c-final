#include<iostream>
using namespace std;

class myclass
{
    int a;
public:
    void set_a(int num);
    void get_a();
};

void myclass :: set_a(int num)
{
    a = num;
}
void myclass ::get_a()
{
    cout << "" << a << endl;
}

main()
{
    myclass obj1, obj2;
    obj1.set_a(10);
    obj2.set_a(99);
    obj1.get_a();
    obj2.get_a();
}
