//Write a C++ program to print tables of 1,2,3 to 10 using nested for loop.

#include<iostream>
using namespace std;

int main(){
	for(int i=1 ; i<=10 ; i++){
		for(int j=1 ; j<=10 ; j++){
			cout<<i<<" x "<<j<<" = "<<i*j<<endl;
		}
		cout<<endl;
	}
	return 0;
}


