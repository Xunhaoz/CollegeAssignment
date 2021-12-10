/*
Assignment 11
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
*/

#include<iostream>
#include<vector>
using namespace std;
vector<char> processed_string;
vector<int> radius;
int main(){
    string temp;
    while(1){
        if(!(cin >> temp) && temp == "-1")
            break;
        //初始化
        radius.clear();
        processed_string.clear();
        radius.push_back(0);
        radius.push_back(0);

        //預處理
        processed_string.push_back('*');
        processed_string.push_back('_');
        for(int i=0;i<temp.size();++i){
            processed_string.push_back(temp[i]);
            processed_string.push_back('_');
        }
        processed_string.push_back('&');

        //Manacher's Algorithm
        int c=0, r=0, l=0, max_index=0 ;
        for(int i=2;i<processed_string.size();++i){
            cout<<processed_string[i];
            int mirror_index = c * 2 - i;

            //回文串長度是否大於大回文串
            if(mirror_index<=2 || i>=r || i+radius[mirror_index]>=r){

                if(mirror_index>=0 && i+radius[mirror_index]>=r) radius.push_back(r-i);

                else radius.push_back(0);

                while(processed_string[i-radius[i]-1] == processed_string[i+radius[i]+1])
                    radius[i]++;

                c = i;
                l = i - radius[i];
                r = i + radius[i];
            }
            else radius.push_back(radius[mirror_index]);

            if(radius[i] > radius[max_index])
                max_index = i;
        }

        for(int i=(max_index-radius[max_index])/2;i<(max_index-radius[max_index])/2+radius[max_index];i++)
            cout << processed_string[i];
        cout << radius[max_index] << endl;


    }

}
