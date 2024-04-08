#include<iostream>
using namespace std;
class Circle{
    private:
        float radius,result=0;
    public:
        void input()
        {
            cout<<"enter the radius of circle"<<endl;
            cin>>radius;
        }
        void area()
        {
            result = 2*(3.14)*radius;
        }
        void display()
        {
            cout<<"area of radius is "<<radius<<" = "<<result;
        }
};
int main()
{
    Circle c;
    c.input();
    c.area();
    c.display();
    return 0;
}