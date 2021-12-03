/*
Practice 10
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/
#include<iostream>
using namespace std;
int main(){
    string user_input;

    while(1){
        bool is_palindrome = true;
        cin >> user_input;

        if(user_input == "-1")
            break;

        int i=0;
        while(user_input[i] != '\0'){
            // cout << user_input[i] << ' ' <<  user_input[user_input.size() - i-1] <<endl;

            if(user_input[i] != user_input[user_input.size() - i-1]){
                is_palindrome = false;
                break;
            }
            i++;
        }

        cout << ((is_palindrome) ? "Palindrome!" : "Not Palindrome!") << endl;
    }
}
