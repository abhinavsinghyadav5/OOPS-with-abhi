#include<iostream>
using namespace std;
class Electric
{
        float unit;
        char name[20];
    public:
        void accept()
        {      cout<<"\n Enter Name   : ";
                cin>>name;
                cout<<"\n No. Of Units : ";
                cin>>unit;
        }
        void print_bill();
};
void Electric::print_bill()
{
        int bill=0;
        if(unit>=100 && unit<=300)
                bill=(50+(unit*0.60));
        else if(unit>100 && unit<=300)
                bill=(50+(unit*0.60)+(unit*0.80));
        else if(unit>300)
                bill=(50+(unit*0.90));
        if(bill>300)
                bill=(bill+(bill*(15/100)));
        cout<<"\n Bill = "<<bill<<"\t"<<name<<endl;
}
int main()
{       Electric e[10];
        int i,cnt;
        cout<<"\n Enter How Many Customers You Want? : ";
        cin>>cnt;
        for(i=0; i<cnt; i++)
                e[i].accept();
        for(i=0; i<cnt; i++)
                e[i].print_bill();
        return 0;
}
