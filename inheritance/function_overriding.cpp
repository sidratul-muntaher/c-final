#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating";
    }
};
class mouse : public Animal
{
public:
    void eat(){cout << "mouse eat bread\12";}
};

class cat: public Animal
{
public:
    void eat()
    {
        cout<< "cat eat mouse \12";
    }
};
main()
{
    cat obj1;
    obj1.eat();
    mouse obj2;
    obj2.eat();
}
