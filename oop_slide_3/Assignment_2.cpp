#include<iostream>
using namespace std;
class B
{
    int c, d;
public:
    set_data(int m, int n)
    {
        c = m;
        d = n;
    }
    display()
    {
        cout << c << " " << d << endl;
    }
};

main()
{
    B e, f;
    e.set_data(67, 55);
    f = e;
    e.display();
    f.display();
}
