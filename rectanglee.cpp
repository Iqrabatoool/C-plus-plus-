#include <iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int width;
    string name;
    public:
   rectangle();
   rectangle(string, int , int);
   rectangle operator ++();
   rectangle operator --();
   rectangle operator ++(int);
   rectangle operator --(int);
   rectangle operator +(rectangle & obj);
   rectangle operator -(rectangle & obj);
   rectangle operator *(rectangle & obj);
   rectangle operator /(rectangle & obj);
   bool operator ==(rectangle & obj);
   bool operator !=(rectangle & obj);
   bool operator >(rectangle & obj);
   bool operator <(rectangle & obj);
   bool operator >=(rectangle & obj);
   bool operator <=(rectangle & obj);
   void display();
};

//defining constructor
rectangle :: rectangle(){
    length = 0;
    width = 0;
    name = "Rectangle";
}

//defining parameterized constructor
rectangle :: rectangle(string n, int l, int w){
    name = n;
    length = l;
    width = w;
}

//defining operator overloading functions
rectangle rectangle :: operator ++(){
    length++;
    width++;
    return *this;
}

//defining operator overloading functions
rectangle rectangle :: operator --(){
    length--;
    width--;
    return *this;
}

//defining operator overloading functions
rectangle rectangle :: operator ++(int){
    rectangle temp = *this;
    length++;
    width++;
    return temp;
}

//defining operator overloading functions
rectangle rectangle :: operator --(int){
    rectangle temp = *this;
    length--;
    width--;
    return temp;
}

//defining operator overloading functions
rectangle rectangle :: operator +(rectangle & obj){
    rectangle temp;
    temp.length = length + obj.length;
    temp.width = width + obj.width;
    return temp;
}

//defining operator overloading functions
rectangle  rectangle :: operator -(rectangle & obj){
    rectangle temp;
    temp.length = length - obj.length;
    temp.width = width - obj.width;
    return temp;
}

//defining operator overloading functions
rectangle  rectangle :: operator *(rectangle & obj){
    rectangle temp;
    temp.length = length * obj.length;
    temp.width = width * obj.width;
    return temp;
}

//defining operator overloading functions
rectangle  rectangle :: operator /(rectangle & obj){
    rectangle temp;
    temp.length = length / obj.length;
    temp.width = width / obj.width;
    return temp;
}

//defining operator overloading functions
bool rectangle :: operator ==(rectangle & obj){
    if(length == obj.length && width == obj.width){
        return true;
    }
    else{
        return false;
    }
}

//defining operator overloading functions
bool  rectangle :: operator !=(rectangle & obj){
    if(length != obj.length && width != obj.width){
        return true;
    }
    else{
        return false;
    }
}

//defining operator overloading functions
bool  rectangle :: operator >(rectangle & obj){
    if(length > obj.length && width > obj.width){
        return true;
    }
    else{
        return false;
    }
}

//defining operator overloading functions
bool  rectangle :: operator <(rectangle & obj){
    if(length < obj.length && width < obj.width){
        return true;
    }
    else{
        return false;
    }
}

bool  rectangle :: operator >=(rectangle & obj){
    if(length >= obj.length && width >= obj.width){
        return true;
    }
    else{
        return false;
    }
}

bool   rectangle :: operator <=(rectangle & obj){
    if(length <= obj.length && width <= obj.width){
        return true;
    }
    else{
        return false;
    }
}

void rectangle :: display(){
    cout << name << " " << length << " " << width << endl;
}

//defining main function
int main(){
    rectangle r2("BOX" , 4 , 4) , r3;
    rectangle r1("BOX" , 2 , 4);
    r3 = r1 + r2;
    r1.display();
    r2.display();
    r3.display();
    return 0;
}