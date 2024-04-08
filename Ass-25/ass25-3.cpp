#include<iostream>
using namespace std;
class factorial{
    private:
        int num,result=1;
    public:
        void input()
        {
            cout<<"Enter a number to find factorial "<<endl;
            cin>>num;
        }
        void fact()
        {
            for(int i=num;i>0;i--)
            {
                result=result*i;  
            }
        }
        void display()
        {
            cout<<" factorial of "<<num<<" is = "<<result;
        }

      

};
int main()
{
    factorial f;
    f.input();
    f.fact();
    f.display();

    return 0;
}