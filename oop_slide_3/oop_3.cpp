#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
public:
    void get_data(int a, float b);
    void put_data();
};
void  item::get_data(int a, float b)
{
    number = a;
    cost = b;
}

void item::put_data()
{
    cout << number << endl << cost << endl;
}
main()
{
    item x;
    x.get_data(100, 299.95);
    x.put_data();

    item y;
    y.get_data(200, 175.5);
    y.put_data();
}
