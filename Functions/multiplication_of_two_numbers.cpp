#include<iostream>

using namespace std;

int mul(int a, int b);

int main(){
	int num1, num2;
	cout<<"Enter first num: "<<endl;
	cin>>num1;
	cout<<"Enter second num: "<<endl;
	cin>>num2;
	cout<<"Multiplication of two nums is : "<<mul(num1,num2)<<endl;
	return 0;
}

int mul(int a, int b){
	int c=a*b;
	return c;
}
