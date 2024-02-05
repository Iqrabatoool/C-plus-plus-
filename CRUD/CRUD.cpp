#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
	int check = 1,repeat=1;
	string name,str;
	int age;
	fstream fin,fout;

	while(repeat ==1){
	cout<<"Press 1 to enter data in database "<<endl;
	cout<<"Press 2 to delete entry in database "<<endl;
	cout<<"Press 3 to update entry in database "<<endl;
	cout<<"Press 4 to view data "<<endl;
	cin>>check;
	
	//Add data in the DATA base
	if(check==1){
	fout.open("data.csv",ios::app);
	int repeat = 1;
	while(repeat ==1){
	cout<<"Enter name : ";
	cin.ignore();
	getline(cin,name);
	cout<<"Enter age : ";
	cin>>age;
	fout<<name<<","<<age<<endl;
	cout<<"To add more data press ( 1 ) To exit press any key ";
	cin>>repeat;
	}
	fout.close();
	if(repeat!=1){
		check =0;
	}
}
	
	//DELETE data from data base
	if(check == 2){
		string sname,dname,did,heading;
		cout<<"Enter the name you wanna delete ";
		cin.ignore();
		getline(cin,dname);
//		cin>>dname;
		fin.open("data.csv",ios::in);
		fout.open("data2.csv",ios::out);
		fout<<"Name,ID";
		fin>>str;
		while(getline(fin,str)){
			stringstream ss(str);
			getline(ss,sname,',');
			getline(ss,did,',');
			if(sname!=dname){
					fout<<sname<<",";
					fout<<did<<endl;
			}
		}
		fout.close();
		fin.close();
		remove("data.csv");
		rename("data2.csv","data.csv");

	}
	
	//Update data in database
	if(check ==3){
		string name,uname,uid,updated_name,updated_id;
		cout<<"Enter the name you wanna Update ";
		cin>>name;
		fin.open("data.csv",ios::in);
		fout.open("data2.csv",ios::out);
		fout<<"Name,Id"; 
		fin>>str;
		while(getline(fin,str)){
			stringstream ss(str);
			getline(ss,uname,',');
			getline(ss,uid,',');
			if(uname==name){
			cout<<"Enter new name ";
			cin>>updated_name;
			cout<<"Enter new id ";
			cin>>updated_id;
			fout<<updated_name<<",";
			fout<<updated_id<<endl;
		}
			if(uname!=name){
				fout<<uname<<",";
				fout<<uid<<endl;
			}
		}
		fout.close();
		fin.close();
		remove("data.csv");
		rename("data2.csv","data.csv");
	}
	
	//To see Whole data
	if(check==4){
		string dis_name,dis_id;
		fin.open("data.csv",ios::in);
		fin>>str;
		cout<<setw(15)<<left<<"Name"<<"  "<<"ID";
		while(getline(fin,str)){
			stringstream ss(str);
			getline(ss,dis_name,',');
			getline(ss,dis_id,',');
			cout<<setw(15)<<left<<dis_name<<"  "<<dis_id<<endl;
		}
		fin.close();
	}
	cout<<"Press 1 If You Want To Alter It Further ";
	cin>>repeat;
}
cout<<endl<<"Thank You for using Our DataBase :)";
return 0;
}

