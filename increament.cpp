#include<iostream>
using namespace std;
class Complex
{
    private:
    int a, b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<" "<<b;
    }
    Complex operator++()
    {
        Complex temp;
        temp.a=a+1;
        temp.b=b+1;
        return temp;
    }

};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,6);
    c2=++c1;
    c2.showdata();
    return 0;
}