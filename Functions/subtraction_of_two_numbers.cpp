#include<iostream>
using namespace std;

int sub(int a, int b);

int main(){
	int num1, num2;
	cout<<"Enter first num: "<<endl;
	cin>>num1;
	cout<<"Enter second num: "<<endl;
	cin>>num2;
	cout<<"Subtraction of two numbers is : "<<sub(num1,num2);
	return 0;

}

int sub(int a, int b){
	int c=a-b;
	return c;
}	

