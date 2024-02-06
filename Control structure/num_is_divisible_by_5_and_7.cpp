/*Accept the number from user and check whether the number is divisible by 5 and 7 or not.*/

#include<iostream>

using namespace std;

int main (){
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	if(a%5==0 && a%7==0){
		cout<<"The given number is divisible by 5 and 7.";
	}
	
	else{
		cout<<"Number is not divisible by 5 and 7.";
	}
	return 0;
}
