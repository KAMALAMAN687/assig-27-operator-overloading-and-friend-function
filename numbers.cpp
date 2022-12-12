#include<iostream>
using namespace std;
class Numbers
{
    private:
    int x,y,z;
    public:
    Numbers()
    {
        cout<<"enter three numbers";
        cin>>x>>y>>z;
    }
     Numbers operator-()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;

    }
    void showdata()
    {
        cout<<"x= "<<x<<endl;
         cout<<"y= "<<y<<endl;
          cout<<"z= "<<z<<endl;
    }


};
int main()
{
    Numbers n1;
    n1=-n1;
    n1.showdata();
    return 0;




}