/*
Practice 11
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
using namespace std;
vector<char> temp_string;
set<char> is_exist;
map<char, int> char_to_int;
int main(){
    int num;
    char temp_char;
    while(1){
        cin >> num;
        if(num == -1) break;

        temp_string.clear();
        is_exist.clear();
        char_to_int.clear();

        for(int i=0;i<num;++i){
            cin >> temp_char;
            if(!is_exist.count(temp_char)){
                temp_string.push_back(temp_char);
                is_exist.insert(temp_char);

            }
            else
                continue;
        }

        sort(temp_string.begin(), temp_string.end());


        for(int i=0;i<temp_string.size();++i){
            cout << temp_string[i] << ' ' ;
            char_to_int[temp_string[i]] = i;
        }
        cout << endl;
        cin >> temp_char;
        cout << (is_exist.count(temp_char) ? char_to_int[temp_char]:-1) << endl << endl;

    }
    return 0;
}
