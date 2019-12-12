#include<iostream>
using namespace std;
class box
{
    int length;
    int breadth;
    int height;
public:
    double getVolume()
    {
        return length * breadth * height;
    }
    void setLenght(double len)
    {
        length = len;
    }
    void setBreadth(double bre)
    {
        breadth = bre;
    }
    void setHeight(double hei)
    {
        height = hei;
    }
    box operator + (box b)
    {
        box temp ;
        temp.height = this->height + b.height;
        temp.breadth = this->breadth + b.breadth;
        temp.length = this->length + b.length;
        return temp;
    }
};
main()
{
    box ob1, ob2, ob3;
    ob1.setLenght(10);
    ob1.setHeight(20);
    ob1.setBreadth(30);

    ob2.setLenght(15);
    ob2.setHeight(25);
    ob2.setBreadth(35);

    ob3 = ob1 + ob2;
    cout << "Volume 1 : "<< ob1.getVolume() << endl;
    cout << "Volume 2 : "<< ob2.getVolume() << endl;
    cout << "Volume 3 : "<< ob3.getVolume() << endl;
}
