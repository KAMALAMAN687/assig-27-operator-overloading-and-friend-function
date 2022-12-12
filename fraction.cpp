#include<iostream>
using namespace std;
class Fraction
{
  private:
  long numerator;
  long denominator;
  public:
  void fraction(long n, long d)
  {
    numerator=n;
    denominator=d;

  }
  Fraction operator++(int)
  {
    Fraction temp;
    temp.numerator = numerator + 1;
    temp.denominator = denominator +1;
    return temp;
  }
  Fraction operator++()
  {
    Fraction temp;
    temp.numerator = numerator + 1;
    temp.denominator = denominator +1;
    return temp;
  }
  void showdata()
  {
    cout<<"numerator = "<<numerator<<endl;
    cout<<"denominator = "<<denominator<<endl;
  }

};
int main()
{
    Fraction f1,f2;
    int a,b;
    cout<<"enter numerator and denominator";
    cin>>a>>b;
    f1.fraction(a,b);
    f2=f1++;
    f2.showdata();

}