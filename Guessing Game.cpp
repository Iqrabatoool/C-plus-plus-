#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int num,attempts, random_num,score=0;
	attempts = 5;
	char check='y';
 	cout<<"### Guessing Game ###\n";
 	srand(time(0));
	do{
	random_num = (rand()%10)+1;
	cout<<"Enter your guess : ";
 	cin>>num;
	while(attempts>1){
	for(int i=0;i<attempts;i++){
	
 	if(num==random_num){
 		cout<<"Your guess is right\n";
 		score=score+10;
 		cout<<"Your score is "<<score<<endl;
 		attempts=0;
 		break;
	 }
	 else if(num>random_num){
	 	cout<<"Number is smaller than your number :)\n";
	 }
	 else{
	 	cout<<"Number is greater than your number ;)\n";
	 }
	 cout<<"No of Attempts Left "<<attempts-1<<endl;
	cout<<"Enter your guess : ";
 	cin>>num;
	 attempts--;
	 
	}
	
}
cout<<endl;
cout<<"Do you wanna play again (Y/N) ";
cin>>check;
if(check=='Y' or check=='y'){
	attempts=5;
}else{
	cout<<"###"<<"Your Score is "<<score<<" ###";
}

}while(check=='Y' or check=='y');
    return 0;
}
