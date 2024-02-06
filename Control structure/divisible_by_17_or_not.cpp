/*Accept the number from user and check whether the number id divisible by 17 or not*/

#include<iostream>
using namespace std;

int main (){
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	
	if(a%17==0){
		cout<<"The given number is divisible by 17.";
	}
	
	else{
		cout<<"It is not divisible by 17.";
	}
	return 0;
}
