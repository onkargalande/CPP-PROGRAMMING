/*Accept three numbers and check whether which is the min number.*/

#include<iostream>

using namespace std;

int main (){
	
	int a,b,c,min;
	
	cout<<"Enter three numbers :";
	cin>>a>>b>>c;
	
	if(a<b && a<c){
		cout<<" Min= "<<a;
	}
	else if (b<a && b<c){
		cout<<" min= "<<b;
	}
	else if(c<a && c<b){
		cout<<" Min= "<<c;
	}
	else if(a==b && c<a){
		cout<<a<<"and"<<b<<"are min and equals."<<endl;
	}
	else if(b==c && a<b){
		cout<<b<<"and"<<c<<"are min and equals."<<endl;
	}
	else if(a==c && b<a){
		cout<<a<<"and"<<c<<"are min and equals."<<endl;
	}
	else{
		cout<<"All are equal.";
	}
	return 0;
}
