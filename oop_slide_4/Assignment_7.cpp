#include<iostream>
using namespace std;
class sample
{
    int x;
public:
    void get_val(int a)
    {
        x = a;
    }
    void show_val()
    {
        cout << x << endl;
    }
};
main()
{
    sample ob[3];
    for(int i = 10; i < 13; i++)
    {
        ob[i].get_val(i);
    }
    for(int i = 10; i < 13 ; i++)
    {
        ob[i].show_val();
    }
}
