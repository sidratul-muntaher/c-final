#include<iostream>
using namespace std;

class studentRoll 
{

private:
    /* data */ 
public:
int roll;

};


 
class studentName:public studentRoll 
{

private:
    /* data */ 
public:
char name[60];
  
void getname_roll ();
  
void display ();

 
};


void
studentName::getname_roll () 
{
  
cout << "Enter roll : ";
  
cin >> roll;
  
cout << "Enter name : ";
cin >> name;

} 
 
class studentresult:public studentRoll 

{

private:
float mark;		/* data */

public:
void get_marks ();
  
void display ();

 
};


 
void
studentresult::display () 
{
  
cout << "Marks : " << mark;

} 
void

studentresult::get_marks () 
{
  
cout << "Enter marks : ";
  
cin >> mark;

} 
void studentName :: display()
{
    cout << "Roll : " << roll <<endl;
    cout << "Name : " << name << endl;
}
 
main () 
{
  
studentName a;
  
a.getname_roll ();
  
studentresult b;
  
b.get_marks ();
  
a.display ();
  
b.display ();

}
