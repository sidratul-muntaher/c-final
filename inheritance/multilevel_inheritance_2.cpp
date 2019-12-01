
#include<iostream>
using namespace std;
class   A
{
protected:
    int length;
    void get_length()
    {
        cout<< "Enter the length ";
        cin >> length;
    }
};
class B : public A
{
protected:
    int width;
    void get_width()
    {
        cout << "Enter the width ";
        cin >> width;
    }
public:
    void area()
    {
        cout << "Area " << length*width;
    }
};

class c:public B
{
    int height;
    public:
    void get_height()
    {
        cout << "Enter the height ";
        cin >> height;
    }

    void volume()
    {

        get_width();
        get_length();
        get_height();
        cout << "Volume = "<< height*length*width <<endl;
    }
};

main()
{
    c obj;
    //obj.get_height();
    obj.volume();
    obj.area();
}
