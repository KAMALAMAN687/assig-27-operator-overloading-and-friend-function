#include<iostream>
using namespace std;
class Time
{
    private:
    int hour;
    int minute;
    int seconds;
    public:
    Time()
    {
        cout<<endl<<"enter hours    :  ";
        cin>>hour;
        cout<<endl<<"enter minutes   :  ";
        cin>>minute;
        cout<<endl<<"enter seconds    :  ";
        cin>>seconds;
    }
    void showdata()
    {
        cout<<"Hours  :  "<<hour<<endl;
        cout<<"Minutes :  "<<minute<<endl;
        cout<<"Seconds :   "<<seconds<<endl;
    }
    void operator==(Time t )
    {
        if(hour==t.hour&&minute==t.minute&&seconds==t.seconds)
        {
            cout<<"times are same";
        }
        else 
        cout<<"times are not same";
        
    }


};
int main()
{
    cout<<"enter first time :"<<endl;
    cout<<"..................";
    Time t1;
    cout<<"First time "<<endl;
    t1.showdata();
    cout<<"enter second  time:"<<endl;
    cout<<"...................."<<endl;
    Time t2;
    cout<<"second time";
    t2.showdata();
    t1==t2;
    return 0;
    



}