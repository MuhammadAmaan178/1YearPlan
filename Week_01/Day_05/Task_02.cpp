//Create a multiplication table for a given number

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter Number Of Which Table You Want : ";
	cin>>num;
	for (int i = 1;i<11;i++){
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}
	return 0;
}
