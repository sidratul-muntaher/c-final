#include<iostream>
using namespace std;
class addnumber
{
    int a, b;
public:
    void input_number()
    {
        cin >> a >> b;
    }
    int add()
    {
        int x = a + b;
        return x;
    }
    void show()
    {
        cout << "Addition is : " << add() <<endl;
    }
};
main()
{
    addnumber obj;
    obj.input_number();
    obj.add();
    obj.show();
}
