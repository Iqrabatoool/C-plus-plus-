// CODE 1
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     int x = 2;
//     A operator + (A & a1){
//         A a2;
//         a2.x = x + a1.x;
//         return a2;
//     }
// };

// int main(){
//     A a1,a2,a3;
//     a3 = a1+;
//     cout<<a3.x;
//     return 0;
// }

// CODE 2
#include <iostream>
using namespace std;
class A{
    public:
    int x = 2;
    A operator + (A){
        this -> x =  x + this -> x;
        cout<<this;
        return *this;
    }
};
int main(){
    A a1,a2,a3;
    a3 = a1+ a2;
    cout<<a3.x;
    return 0;
}