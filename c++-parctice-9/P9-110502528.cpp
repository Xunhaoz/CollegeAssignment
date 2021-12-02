/*
Practice 9
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	string temp;
	cin >> n;
	getline(cin, temp);
	while(n--){

        int count_ = 1;
        getline(cin, temp);
        if(temp == "\n"){
            cout << endl;
        }
        else{
            for(int i=0;i<temp.size();++i){
                if(i == temp.size()-1)
                    cout << temp[i] << count_ ;
                else if(temp[i] == temp[i+1])
                    count_++;
                else{
                    cout << temp[i] << count_ ;
                    count_ = 1;
                }
            }
            cout << endl;
        }

	}

	return 0;
}
