#include<iostream>
using namespace std;
class Square{
    private:
        int num,result=0,count=0;
    public:
        void input()
        {
            cout<<"enter a number"<<endl;
            cin>>num;
        }
        void calculate()
        {
            count++;
            result = num * num;
        }
        void display()
        {
            cout<<"square of given number "<<num<<" is "<<result;
            cout<<endl<<"calculate function is called "<<count<<" number of times";
        }
};
int main()
{
    Square sq;
    sq.input();
    sq.calculate();
    sq.display();
    return 0;
}