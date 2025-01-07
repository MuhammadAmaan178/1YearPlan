//Write a C++ program to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;
int main(){
	float a1,a2,a3;
	cout<<"Enter Three Angles Of Triangle : ";
	cin>>a1>>a2>>a3;
	if((a1+a2+a3)==180){
		cout<<"Triangle Is Valid"<<endl;
	}else{
		cout<<"Triangle Is Not Valid"<<endl;
	}
	return 0;
}
