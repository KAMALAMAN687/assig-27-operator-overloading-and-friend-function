#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
    char str[100];
    public:
    void setdata()
    {
        cout<<"enter a string"<<endl;

        cin.getline(str,100);
    }
    mystring operator!()
    {
        mystring temp;
        strcpy(temp.str,strrev(str));
        return temp;
    }
    void showdata()
    {
        cout<<str<<endl;
    }

};
int main()
{
    mystring m1,m2;
    m1.setdata();
    m2=!m1;
    m2.showdata();
    return 0;

}