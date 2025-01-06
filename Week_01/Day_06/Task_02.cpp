//Create a program to sum all even numbers from 1 to 50.

#include<iostream>
using namespace std;
int main(){
	int sum = 0;
	for(int i = 1;i<=50;i++){
		if(i%2 == 0){
			sum = sum + i;
		}
	}
	cout<<"Sum : "<<sum;
	return 0;
}
