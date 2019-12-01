#include<iostream>
using namespace std;
class base
{
public:
    int x;
    void get_data(){
        cout << "Enter x ";
        cin >> x;
    }
};
class drived_1 : public base
{
public:
    int y;
    void read_data()
    {
        cout<< "Enter y ";
        cin >> y;
    }
};

class drived_2 : public drived_1
{
    int z;
public:
    void in_data()
    {
        cout << "Enter z ";
        cin >> z;
    }
    void product()
    {
        cout << "product " << x*y*z<< endl;
    }
};

main()
{
    drived_2 obj;
    obj.get_data();
    obj.read_data();
    obj.in_data();
    obj.product();


}
