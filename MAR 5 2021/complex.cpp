// Basic to basic data type
#include <iostream>

using namespace std;

class Complex{
    int a,b;
    public:
        Complex(){};
        Complex(int k){
            a = k;
            b = 0;
        };
        

        void setData(int x,int y){
            a = x;
            b = y;
        }
        void showData(){
            cout << "a:"<<a<<" b:"<<b<<endl;
        }
};

int main(){
    Complex c1;
    c1.setData(10,20);
    int x = 5;
    c1 = x;
    c1.showData();
    return 0;
}