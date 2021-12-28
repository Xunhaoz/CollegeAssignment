/*
Assignment 13
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
*/

#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;


bool is_sudo[9][27];
void init();
void my_function();
bool check();

int main(){
    string filename = "sudo1";
    for(int i=1;i<4;++i){
        filename[4] = char(int('0') + i);
        ifstream in(filename + ".txt");
        cin.rdbuf(in.rdbuf());
        init();
        my_function();
        cout << filename+":" << (check() ? "Y" : "N") << endl;
    }



    return 0;
}

//9*直 9*橫 9*九宮格
void init(){
    for(int i=0;i<9;i++){
        for(int j=0;j<27;j++){
            is_sudo[i][j] = false;
        }
    }
}

void my_function(){

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            int tmp;
            cin >> tmp;
            tmp --;

            is_sudo[tmp][i] = (is_sudo[tmp][i] ? false : true);

            //cout << "is_sudo[" << tmp << "][" << i << "]"<< is_sudo[tmp][i] <<endl;
            //if(i == 13) cout << "Here" <<endl;

            is_sudo[tmp][j+9] = (is_sudo[tmp][j+9] ? false : true);

            //cout << "is_sudo[" << tmp << "][" << j+9 << "]"<< is_sudo[tmp][j+9] <<endl;
            //if(j+9 == 13) cout << "Here" <<endl;

            is_sudo[tmp][(i/3)*3+(j/3)+18] = (is_sudo[tmp][(i/3)*3+(j/3)+18] ? false : true);

            //cout << "is_sudo[" << tmp << "][" << (i/3)*3+(j/3)+18 << "]"<< is_sudo[tmp][(i/3)*3+(j/3)+18] <<endl;
            //if((i/3)*3+(j/3)+18 == 13) cout << "Here" <<endl;
        }
    }

}
bool check(){
    bool tmp = true;

    for(int i=0;i<9;i++){
        for(int j=0;j<27;j++){
            if(is_sudo[i][j] == false) tmp = false;
        }
    }

    return tmp;
}
