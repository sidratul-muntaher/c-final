#include<iostream>
using namespace std;
class sample
{
    int x, y, z;
public:
    void get_data(int, int, int);
    void changeSign(sample s);
    void display();
};
void sample::get_data(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void sample::changeSign(sample s)
{
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
    cout << "Inside ChangeSign function : " <<endl;
    cout <<"x = "<<s.x <<endl;
    cout <<"y = "<<s.y <<endl;
    cout <<"z = "<<s.z <<endl << endl;
}
void sample ::display()
{
    cout << "X = "<<x<<endl;
    cout << "Y = "<<y<<endl;
    cout << "Z = "<<z<<endl;
}
main()
{
    sample a;
    a.get_data(-5, 10, -15);
    cout << "Before calling change function : " << endl;
    a.display();
    cout << "After calling change function : " << endl;
    a.changeSign(a);
    a.display();


}
