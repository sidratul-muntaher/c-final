#include<iostream>
using namespace std;
class employee
{
    char name[30];
    int age;
public:
    void getdata();
    void putdata();

};

void employee ::getdata()
{
    cout << "Enter name : ";
    cin >>name;
    cout << "Enter Age : ";
    cin >> age;
}
void employee ::putdata()
{
    cout << "Name " << name <<endl;
    cout << "Age " << age <<endl;
}
main()
{
    employee object[3];
    for(int i = 0; i < 3; i++)
    {
        cout << "Details of Manager " << i+1 <<endl;
        object[i].getdata();
    }
    for(int i = 0; i < 3; i++)
    {
        cout << "Details of Manager " << i+1 <<endl;
        object[i].putdata();
    }
}
