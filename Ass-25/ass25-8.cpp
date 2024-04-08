#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth,result=0;
    public:
        void input()
        {
            cout<<"enter length and breadth"<<endl;
            cin>>length>>breadth;
        }
        void area()
        {
            result = length*breadth;
        }
        void display()
        {
            cout<<"area is "<<result;
        }

};
int main()
{
    Rectangle rect;
    rect.input();
    rect.area();
    rect.display();
    return 0;
}