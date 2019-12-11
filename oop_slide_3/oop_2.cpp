#include<iostream>
using namespace std;

class myclass
{
public:
    int a;
};
main()
{
    myclass ob1, ob2;
    ob1.a = 10;
    ob2.a = 99;
    cout <<ob1.a <<endl;
    cout <<ob2.a <<endl;
}
