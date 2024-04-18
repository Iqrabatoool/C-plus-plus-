// Code 1
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     int x = 2;
//     void disp(){
//         cout<<"Disp done";
//         cout<<x;
//     }
// };
// int main(){
//     A a1;
//     a1.x++;
//     a1.disp();
//     return 0;
// }

// Code 2
#include <iostream>
using namespace std;
class A{
    public:
    int x = 2;
    void operator ++(){
        ++x;
    }
     void operator ++(int){
        x++;
    }
    void disp(){
        cout<<"x = "<<x<<endl;
    }
};
int main(){
    A a1;
    a1.disp();
    ++a1;
    a1.disp();
    a1++;
    a1.disp();
    return 0;
}