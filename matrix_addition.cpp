#include<iostream>
using namespace std;
class Matrix
{
    private:
    int a[3][3];
    int i,j;
    public:
    
    void setdata()
    {
        cout<<"enter number in a matrix"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
             cin>>a[i][j];
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return temp;
    }
    void showdata()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

};
int main()
{
    Matrix m1,m2,m3;
    m1.setdata();
    m2.setdata();
    m1.showdata();
    cout<<endl;
    m2.showdata();
    cout<<endl;
    m3=m1+m2;
    m3.showdata();

}
