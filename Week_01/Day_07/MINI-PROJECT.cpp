//Combine all above questions in a mini-project (e.g., a menu-driven program that allows the user to perform basic arithmetic operations)'{Hint: -use switch case}.

#include<iostream>
using namespace std;
int main(){
	int choice;
	int number,reversedNumber=0,remainder;
	float a1,a2,a3;
	cout<<"\t\t\t\tList Of My Programs"<<endl;
	cout<<"******************************************************************************************"<<endl;
	cout<<"1.Program to take three-digit numbers from user then display its reverse order."<<endl;
	cout<<"2.Program to input angles of a triangle and check whether triangle is valid or not."<<endl;
	cout<<"3.Program that prints complete alphabets using for loop? (a-z)."<<endl;
	cout<<"4.Program to print tables of 1,2,3 to 10 using nested for loop."<<endl;
	cout<<"******************************************************************************************"<<endl;
	cout<<"Enter Your Choice Between 1 to 4 : ";
	cin>>choice;
	cout<<"******************************************************************************************"<<endl;
	switch(choice){
		case 1:
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
			break;
		case 2:
			cout<<"Enter Three Angles Of Triangle : ";
			cin>>a1>>a2>>a3;
			if((a1+a2+a3)==180){
				cout<<"Triangle Is Valid"<<endl;
			}else{
				cout<<"Triangle Is Not Valid"<<endl;
			}
			break;
		case 3:
			for (char ch='a'; ch<='z'; ch++){
			    cout<<ch<<" "; 
			}
			break;
		case 4:
			for(int i=1 ; i<=10 ; i++){
				for(int j=1 ; j<=10 ; j++){
					cout<<i<<" x "<<j<<" = "<<i*j<<endl;
				}
				cout<<endl;
			}
			break;
		default:
			cout<<"Enter Between 1 to 4"<<endl;
	}
	return 0;
}
