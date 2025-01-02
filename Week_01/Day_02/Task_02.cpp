//Solve a basic task like converting Celsius to Fahrenheit.
#include<iostream>
using namespace std;
int main(){
	float temp;
	cout<<"Enter Temperature In Celsius : ";
	cin>>temp;
	cout<<"Temperature In Fahrenheit Is : "<<(temp*(9/5))+32;
	return 0;
}
