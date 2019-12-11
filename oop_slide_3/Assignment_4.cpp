#include<iostream>
using namespace std;
class aa
{
    int a, b;
public:
    aa(int i, int j):a(i), b(j)
    {

    }
    int add()
    {
        return a + b;
    }
};


main()
{
    aa ob(20, 10);
    cout << ob.add() << endl;
}

