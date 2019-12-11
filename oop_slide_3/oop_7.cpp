#include<iostream>
using namespace std;
class squrenumber
{
    int number;
public:
    long squre();
    void get_number();
    void display();
};
void squrenumber:: get_number()
{
    cout << "Enter a number : ";
    cin >> number;
}
long squrenumber ::squre()
{
    return number*number;
}
void squrenumber ::display()
{
    cout << "Squre of the number : " << squre() <<endl;
}
main()
{
    squrenumber obj;
    obj.get_number();
    obj.squre();
    obj.display();
}
