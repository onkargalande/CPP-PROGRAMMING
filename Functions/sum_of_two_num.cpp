#include<iostream>

using namespace std;

int sum(int a, int b);

int main(){
	int num1, num2;
	cout<<"Enter first num: "<<endl;
	cin>>num1;
	cout<<"Enter second num: "<<endl;
	cin>>num2;
	cout<<"Sum= "<<sum(num1,num2);
	return 0;

}

int sum(int a, int b){
	int c=a+b;
	return c;
}
