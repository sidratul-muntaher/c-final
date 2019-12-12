#include<iostream>
using namespace std;
class test
{
    int a;
public:
    test(int x):a(x){}
    int sqr(test ob)
    {
        return (ob.a * ob.a);
    }
};
main()
{
    test obj(10);
    cout << "Square : " << obj.sqr(obj);
}
