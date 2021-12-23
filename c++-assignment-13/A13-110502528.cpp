/*
Assignment 13
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
*/

#include<iostream>
#include<fstream>
using namespace std;


bool is_sudo[9][27];
void init();
void my_function();
bool check();

int main(){

    ifstream myfile;

    freopen("sudo1.txt", "r", stdin);
    init();
    my_function();
    cout << "sudo1:" << (check() ? "Y" : "N") << endl;


    freopen("sudo2.txt", "r", stdin);
    init();
    my_function();
    cout << "sudo2:" << (check() ? "Y" : "N") << endl;


    freopen("sudo3.txt", "r", stdin);
    init();
    my_function();
    cout << "sudo3:" << (check() ? "Y" : "N") << endl;


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

            is_sudo[tmp][i] = (is_sudo[tmp][i] ? false : true);

            is_sudo[tmp][j+9] = (is_sudo[tmp][i] ? false : true);

            is_sudo[tmp][(i/3)*3+(j/3)+18] = (is_sudo[tmp][i] ? false : true);

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
