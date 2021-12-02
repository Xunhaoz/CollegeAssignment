/*
Practice 8
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A 
*/ 
#include<iostream>
using namespace std;
int main(){
	string N, I;
	double E, M, C, WE, WM, WC;
	cout<<"Please input your name : ";
	cin>>N;
	cout<<"Please input your student ID : ";
	cin>>I;
	cout<<"English score : ";
	cin>>E;
	cout<<"Math score : ";
	cin>>M;
	cout<<"Chinese score : ";
	cin>>C;
	cout<<"English weight : ";
	cin>>WE;
	cout<<"Math weight : ";
	cin>>WM;
	cout<<"Chinese weight : ";
	cin>>WC;
	
	cout<<endl<<"Student name : "<<N;
	cout<<endl<<"Student ID : "<<I;
	cout<<endl<<"Arithmetic average : "<<(int)(E+M+C)/3;
	cout<<endl<<"Weight average : "<<(int)((E*WE+M*WM+C*WC)/(WE+WM+WC));
	
	
	return 0;


}
