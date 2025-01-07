//Write a program to take three-digit numbers from user then display its reverse order.


#include<iostream>
using namespace std;
int main(){
	int number,reversedNumber=0,remainder;
	cout<<"Enter Three Digits : ";
	cin>>number;
	if(number>=100 && number<=999){
		while(number!=0){
			remainder = number % 10;
			reversedNumber = reversedNumber * 10 + remainder;
			number = number/10;
		}
		cout<<"The reverse of the number is: "<<reversedNumber<<endl;
	}else{
		cout<<"Enter a Valid Three-Digits Number";
	}
	return 0;
}
