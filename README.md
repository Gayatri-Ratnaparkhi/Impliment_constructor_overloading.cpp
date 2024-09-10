### Impliment constructur overloading
**Aim**
To study and implement constructor overloading

**Theory**

Constructor overloading is a concept in object-oriented programming where a class can have more than one constructor with different parameter lists.
It allows for creating objects in different ways, providing flexibility and improving code readability.


**code**
1.Function Overloaging

#include<iostream>
using namespace std;
class Addition{
    public:
    int sum(int a, int b){
        return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
    };
    int main(void)
    {
        Addition obj;
        cout<<obj.sum(20, 15)<<endl;
        cout<<obj.sum(81, 100, 10);
        return 0;
    }

2. Operator Overloading

#include<iostream>
using namespace std;
class Complex{
    private:
    int real, imag;

    public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real+ obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print(){cout<< real<<"+i"<<imag<<"\n";}
};
int main(){
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}


**Outputs**

1.Function Overloaging

![Screenshot 2024-09-10 152406](https://github.com/user-attachments/assets/e2113691-8715-449a-86f0-60cbaa22aecf)

2. Operator Overloading

![Screenshot 2024-09-10 155344](https://github.com/user-attachments/assets/1f75da32-2898-4428-93c6-86a2085e1d28)
   
