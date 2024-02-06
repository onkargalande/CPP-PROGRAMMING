#include<iostream>

using namespace std;

int div(int a, int b);

int main(){
	int num1, num2;
	cout<<"Enter first num: "<<endl;
	cin>>num1;
	cout<<"Enter second num: "<<endl;
	cin>>num2;
	cout<<"Division of two numbers is : "<<div(num1,num2)<<endl;
}


int div(int a, int b){
	int c=a/b;
	return c;
}
