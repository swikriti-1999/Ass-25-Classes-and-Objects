#include<iostream>
using namespace std;
class Area{
    private:
    public:
        void square(int x)
        {
            cout<<"square area "<<x*x<<endl;
        }
        void rectangle(int x, int y)
        {
            cout<<"area of rectangle "<<x*y<<endl;
        }
        void circle(int x)
        {
            cout<<"area of circle "<<2*3.14*x<<endl;
        }
};
int main()
{
    Area a;
    a.square(5);
    a.rectangle(2,5);
    a.circle(5);
    
    return 0;
}