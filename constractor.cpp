#include<iostream>
using namespace std;
class staff
{
    string name;
    string gender;
    int age;
    long salary;
public:

    staff(string n, string g, int a = 40, long s = 4500)
    {
        name = n;
        gender = g;
        age = a;
        salary = s;
    }

    void detail()
    {
        cout << name << endl;
        cout << gender << endl;
        cout << age << endl;
        cout << salary << endl;
    }
    ~staff()
    {
        cout << "Destractor" << name <<endl;
    }
};
main()
{
    staff  ob1("Sidratul", "Male");
    staff  ob2("Mun", "Male", 23, 5000);
    ob1.detail();
    ob2.detail();
}
