#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"real= "<<a<<" imaginary = "<<b<<endl;
    }
    
    Complex operator+(Complex c)
    {   
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    Complex operator-(Complex d)
    {
        Complex temp2;
        temp2.a=a-d.a;
        temp2.b=b-d.b;
        return temp2;
    }
    Complex operator*(Complex e)
    {
        Complex temp3;
        temp3.a=a*e.a-b*e.b;
        temp3.b=a*e.b+b*e.a;
        return temp3;
    }
   friend bool operator==(Complex , Complex);
   
};
bool operator==( Complex e, Complex f)
{
    if(e.a==f.a&&e.b==f.b)
    {
       return true;
    }
    else
    return false;
           
}
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.setdata(2,4);
    c2.setdata(5,6);
    c6.setdata(-14,32);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    cout<<operator==(c6,c5);
    cout<<endl;
    c3.showdata();
    c4.showdata();
    c5.showdata();
    return 0;
}