/*Accept the number from user and check whether the number is positive or negative.*/

#include<iostream>

using namespace std;

int main (){
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	
	if(a>0){
		cout<<"The number is positive.";
	}
	
	else{
		cout<<"The number is negative.";
	}
	return 0;
}
