/*Accept age from user and check whether he/she is eligible for voting or not.*/


#include<iostream>

using namespace std;

int main(){
	
	int age;
	
	cout<<"Enter your age :";
	cin>>age;
	
	if(age<18){
		cout<<"You are not eligible for voting .";
	}
	
	else if(age=18){
		cout<<"Congratulations! You are eligible for voting.";
	}
	return 0;
}
