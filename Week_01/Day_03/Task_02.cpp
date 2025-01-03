//Practice using logical conditions (e.g., check if a number is odd or even).

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a Whole Number : ";
	cin>>num;
	if((num%2)==0){
		cout<<"Given Number Is Even"<<endl;
	}else{
		cout<<"Given Number Is Odd"<<endl;
	}
	return 0;
}
