#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imaginary;
    public:
        // void set(int r, int img){
        //     real = r;
        //     imaginary = img;
        // }
        void input(){
            cout<<"enter the real part"<<endl;
            cin>>real;
            cout<<"enter the imaginary part"<<endl;
            cin>>imaginary;
        }
        void display(){
            cout<<"The complex number is = "<<real<<"+"<<imaginary<<"i"<<endl;
        }
        void add(Complex c)
        {
            cout<<"The complex number is = "<<real<<"+"<<imaginary<<"i"<<endl;
            cout<<"The complex number is = "<<c.real<<"+"<<c.imaginary<<"i"<<endl;
            cout<<"Adding complex number c1 and c2 is = "<<real+c.real<<"+"<<imaginary+c.imaginary<<"i"<<endl;
        }
       
};
int main()
{
    Complex c1,c2;
    // c.set(5,2);
    c1.input();
    // c1.display();

    c2.input();
    // c2.display();

    c1.add(c2); //implicitly passed c1 and explicitly passed c2 
    //  implicit :- means jisse batane ki jarurat nai hai 
    // explicit :- mean jiss batane ki jarurat hai

    return 0;
}