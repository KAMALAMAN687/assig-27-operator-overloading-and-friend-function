#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Cstring
{
    private:
    char a[20];
    public:
    void setdata()
    {
        cout<<"enter string ";
        cin.getline(a,20);
    }
    void showdata()
    {
        cout<<a<<"\n";
    }
    Cstring operator+(Cstring c)
    {
        Cstring temp;
        strcpy(temp.a,a);
        strcat(temp.a,c.a);
        return temp; 
    }
    void operator==(Cstring c)
      {
        int p;
        p=strcmp(a,c.a);
        if(p==-1)
        {
            cout<<"dictionary order";
        }
        else
        {
            if(p==0)
            cout<<"same string";
            else
            cout<<"opposite of dictionary order";
        }

      }

};
int main()
{
    Cstring c1,c2,c3;
    char*p;
    c1.setdata();
    c2.setdata();
    //c1.showdata();
    //c2.showdata();
    c3=c1+c2;
    c3.showdata();
    c1==c2;
    cout<<endl;
    
    return 0;

}