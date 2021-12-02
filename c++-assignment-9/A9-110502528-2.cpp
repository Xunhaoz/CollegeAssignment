/*
Assignment 9
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/
#include<iostream>
#include<map>
using namespace std;
int a[3];
map<int , string> original;
int main(){
    original[0] = "first";
    original[1] = "second";
    original[2] = "third";

    for(int i=0;i<3;i++){
        cout << "Please key in " << original[i] << " number:" << endl;
        cin >> a[i];
    }

    //1 > 2 > 3
    for(int i=0;i<3;i++){
        for(int j=1;j<3-i;j++){
            if(a[j] > a[j-1]){
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }

    if(a[0] < a[1] + a[2]){
        if(a[0] == a[1] && a[0] == a[2])
            cout << "Regular triangle";
        else if(a[1] == a[2] && a[0]*a[0] == a[1]*a[1] + a[2]*a[2])
            cout << "Isosceles right triangle";
        else if(a[0]*a[0] == a[1]*a[1] + a[2]*a[2])
            cout << "Right triangle";
        else if(a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
            cout << "Isosceles triangle";
        else
            cout << "Triangle";
        cout << endl;
    }
    else
        cout << "Not triangle";


}
