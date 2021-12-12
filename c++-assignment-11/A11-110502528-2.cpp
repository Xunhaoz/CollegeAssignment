/*
Assignment 11
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/

#include<iostream>
#include<vector>
using namespace std;
vector<char> processed_string;
vector<int> record;
int main(){
    string user_input;
    while(1){
        cin >> user_input;
        if(user_input == "-1") break;

        processed_string.clear();
        record.clear();
        processed_string.push_back('#');
        for(int i=0;i<user_input.size();++i){
            processed_string.push_back('_');
            processed_string.push_back(user_input[i]);
        }
        processed_string.push_back('_');
        processed_string.push_back('&');

        int l=0, r=-1, pos=0;
        record.push_back(0);
        record.push_back(0);
        for(int i=2;i<processed_string.size();++i){
            if(i>r) record.push_back(1);
            else record.push_back(min(record[l+r-i],r-i+1));

            while(processed_string[i-record[i]] == processed_string[i+record[i]])
                record[i]++;

            record[i]--;

            if(i+record[i]>r){
                l = i-record[i];
                r = i+record[i];
            }

            if(record[i]>record[pos])
                pos = i;
        }

        if(record[pos] == 1)
            cout << "Palindrome not existed!"<<endl<<endl;
        else{
            cout<<"Palindrome:";
            for(int i = pos-record[pos]+1;i<pos+record[pos];i+=2)
                cout<< processed_string[i];
            cout<<endl<<"Length:"<<record[pos]<<endl<<endl;
        }


    }

}
