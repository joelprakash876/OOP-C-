//4. Define class complex with all possible operations: constructor, destructor, copy
//constructor, assignment operator with the data members stored as pointer to integers
#include <iostream>
using namespace std;
class Complex{
    public:
        int *real;
        int *image;
        Complex(int *a,int *b){
        real=a;
        image=b;
            
        }
      //  Complex(const Complex&);
        void display(){
            cout<<*real<<" "<<*image<<endl;
        }
       
         ~Complex(){
             cout<<"Object destroyed\n";
        }
};

void add(Complex c1,Complex c2){
    cout<<*c1.real+*c2.real<<"+"<<*c1.image+*c2.image<<"i"<<endl;
}
void subt(Complex c1,Complex c2){
    cout<<"("<<*c1.real-*c2.real<<")+("<<*c1.image-*c2.image<<")i"<<endl;
}
void mult(Complex c1,Complex c2){
    int a,b,c,d;
    a=*c1.real;
    b=*c2.real;
    c=*c1.image;
    d=*c2.image;
    cout<<"("<<(a*b)-(c*d)<<")+("<<a*d+b*c<<")i"<<endl;
    //(2+3i)(4+5i)
}
void divide(Complex c1,Complex c2){
    int a,b,c,d;
    a=*c1.real;
    b=*c2.real;
    c=*c1.image;
    d=*c2.image;
    float temp=(b*b)-(d*d);
    cout<<"("<<((a*b)-(c*d)/temp)<<")+("<<((a*d+b*c)/temp)<<")i"<<endl;
    //2+3i
    //4+5i
}

int main()
{
    int q1=20,q2=40,q3=50,q4=60;

    Complex p1(&q1,&q2);
    Complex num2(&q3,&q4);
    
    divide(p1,num2);
    
    return 0;
}
