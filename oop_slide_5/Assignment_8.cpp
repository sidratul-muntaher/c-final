#include<iostream>
using namespace std;
class objarg
{
    int a, b, add;
public:
    void input_add_val(int c, int d);
    void after_sign(objarg x);
    void show();

};
void objarg::input_add_val(int c, int d)
{
    a = c;
    b = d;
    add = a + b;
}
void objarg::after_sign(objarg x)
{
    x.add = -x.add;
    cout << "Inside After_sign function : "<<endl;
    cout << "a + b = " << x.add << endl << endl;
}
void objarg:: show()
{
    cout << "a + b" << add <<endl;
}
main()
{
    objarg obj;
    obj.input_add_val(10, 10);
    obj.show();
    obj.after_sign(obj);
    obj.show();
}
