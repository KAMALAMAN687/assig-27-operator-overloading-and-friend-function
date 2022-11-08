#include<iostream>
using namespace std;
class Complex
{
   private:
   int a,b;
   public:
   void setdata(int x , int y)
   {
    a=x;
    b=y;
   }
   void showdata()
   {
    cout<<"real ="<<a<<"imaginary= "<<b;
   }
   friend Complex operator+(Complex , Complex );
};
Complex operator+(Complex d, Complex e)
{
    Complex temp;
    temp.a=d.a+e.a;
    temp.b=d.b+e.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(4,5);
    c3=c1+c2;
    c3.showdata();
    return 0;  
}