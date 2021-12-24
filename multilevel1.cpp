#include<iostream>
using namespace std;
class stu
{
    protected:
    int roll;
    public:
    void put_roll();
    void get_roll(int ); 
};
void stu::get_roll(int x)
{
    roll=x;
}
class test:public stu 
{
 protected :
 float m1,m2;
 public:
 void get_marks(float,float);
 void put_marks();
};
void test::get_marks(float x,float y)
{
    m1=x;
    m2=y;
}
void test:: put_marks ()
{
 cout<<"enter marks of two subjects"<<" "<<m1<<endl<<m2<<endl;
}
class result:public test
{
    float total;
    public:
    void display();
};
void result:: display()
{
    float TOTAL = m1+m2; 
    put_marks();
    cout<<"total="<<TOTAL<<endl;
}
int main()
{
    result t;
    t.get_marks(100,200);
    t.get_roll(20);
    t.display();
}