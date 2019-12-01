#include<iostream>
using namespace std;
class parent
{
public:
    int id_p;
};
class child : public parent

{
public:
    int id_c;
};
main()
{
    child object;
    object.id_p = 7;
    object.id_c = 4;
    cout<< "Parent id "<< object.id_p<<endl;
    cout<< "Child id "<< object.id_c<<endl;
}
