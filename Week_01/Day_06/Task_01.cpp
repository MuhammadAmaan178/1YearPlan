//Write a program to display a right-angle triangle pattern of stars (*).

#include<iostream>
using namespace std;
int main(){
	for(int i = 0;i<=5;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
