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