/*Accept the year from user and check whether the year is leap year or not.*/

#include<iostream>

using namespace std;

int main (){
	int a;
	cout<<"Enter the year : ";
	cin>>a;
	
	if(a%4==0){
		cout<<"Year is leap.";
	}
	else{
		cout<<"Year is not leap.";
	}
	return 0;
}
