#include <iostream>
using namespace std;
class Number {
public:
    int value;

   Number(int val) : value(val) {
       cout << "Constructor called. Value: " << value <<endl;
    }

    ~Number() {
       cout << "Destructor called. Value: " << value <<endl;
    }
};

int main() {
   Number num1(10);
   Number num2(20);

    return 0;
}

