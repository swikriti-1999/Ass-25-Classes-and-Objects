#include<iostream>
using namespace std;
class ReverseNumber{
    private:
        int num,count=0,result=0;
    public:
        void input()
        {
            cout<<"enter a number and you will get reverse of it"<<endl;
            cin>>num;
        }
        void reverse()
        {
            int r;
            for(int i=num; i>0;i=i/10)
            {
                count++;
            }

            for(int i=num; i>0;i=i/10)
            {
                r=i%10;
                result=(result*10)+r;
            }
        }
        void display()
        {
            cout<<"count is "<<count<<endl;
            cout<<"reverse of numer "<<num<<" is "<<result;                                 
        }
};

int main()
{
    ReverseNumber rn;
    rn.input();
    rn.reverse();
    rn.display();
    return 0;
}