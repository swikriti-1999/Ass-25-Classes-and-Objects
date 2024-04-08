#include<iostream>
using namespace std;
class LargestNumber{
    private:
    int num1,num2,num3,result;
    public:
        void input()
        {
            cout<<"enter any three numbers for comparison"<<endl;
            cin>>num1>>num2>>num3;
        }
        void compare()
        {
            if(num1>num2 && num1>num3)
                result=num1;
            else
                if(num2>num1 && num2>num3)
                    result=num2;
                else
                    result=num3;
        }
        void display()
        {
            cout<<"largest number in all three "<<num1<<","<<num2<<","<<num3<<" is "<<result;
        }
};

int main()
{
    LargestNumber ln;
    ln.input();
    ln.compare();
    ln.display();
    return 0;
}