#include <iostream>
using namespace std;
int main(){
	
//  A single variable
	cout<<"A single variable\n";
	int *q = new int;
	*q = 6;
	cout<<*q<<endl;
	
//	Deallocation of variable
	delete q;
	cout<<q<<endl;

//	Dynamically allocated array 
	int *p = new int[4];
//	Method 1
	cout<<"Method 1 \n";
	for(int i =0;i<4;i++){
		*(p+i)=2;
		cout<<*(p+i)<<endl;
	}
//	Method 2
	cout<<"Method 2 \n";
	for (int i=0;i<4;i++){
		p[i]=3;
		cout<<p[i]<<endl;
	}
	
//	Deallocation of array
	cout<<"Check\n";
	delete[] p;
	cout<<p;
	for(int i=0;i<4;i++){
		cout<<*(p+i)<<endl;
	}

//	char
	char *e = new char[5];
		e[0]='a';
		e[1]='c';
		e[2]= 'v';
		e[3]='r';
		e[4]='f';
	
	for(int i=0;i<5;i++){
		cout<<e[i]<<endl;
	}
	delete[] e;

//String
	string *w = new string[3];
	*(w+0) = "Iqra Batool";
	*(w+1) = "Zahra Maryam";
	*(w+2) = "Samana Zahra";
	for(int i=0;i<3;i++){
		cout<<*(w+i)<<endl;
	}
	delete[] w;



	return 0;
}

