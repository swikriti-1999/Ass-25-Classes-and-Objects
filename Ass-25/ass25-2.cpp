#include<iostream>
using namespace std;
class Time{
    private:
        int hours,minutes,seconds;
    public:
        void set(int hr, int min, int sec){
            hours = hr;
            minutes = min;
            seconds = sec;
        }
    void display(){
        cout<<"Current time is : "<<hours<<"hr "<<minutes<<"min "<<seconds<<"sec ";
    }
};
int main()
{
    Time t;
    t.set(5,4,4);
    t.display();

    return 0;
}