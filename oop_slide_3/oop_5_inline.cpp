#include<iostream>
using namespace std;
class samp
{
    int i, j;
public:
    samp(int a, int b);
    int divisable();
};

samp::samp(int a, int b):i(a), j(b)
{

}
inline int samp::divisable()
{
    return !(i%j);
}

main()
{
    samp obj1(10, 2), obj2(10, 3);
    if(obj1.divisable()) cout << "10 is divisable by 2" << endl;
    if(obj2.divisable()) cout << "10 is divisable by 3" << endl;
}
