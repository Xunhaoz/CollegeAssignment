/*
Practice 13
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/
#include<iostream>
#include<fstream>
using namespace std;
char arr[3][3];
int who_win_x[8];
int who_win_o[8];
bool check_x();
bool check_o();
void init();

int main(){
    string filename;
    for(int i=1;i<4;i++){
        filename = "ox" + to_string(i);

        ifstream inFile;
        inFile.open(filename + ".txt", ios::in);

        string tmp;
        for(int j=0;j<3;j++){
            inFile >> tmp;
            for(int i=0;i<3;i++)
                arr[j][i] = tmp[i];
        }
        init();

        cout << filename << ": ";
        if(check_x()) cout << "Xwin" << endl;
        else if(check_o()) cout << "Owin" << endl;
        else cout << "tie" << endl;
    }



    return 0;
}

bool check_x(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == 'x'){
                who_win_x[i%3]++;

                who_win_x[j%3+3]++;

                if(i==j) who_win_x[6]++;

                if(j == 2-i) who_win_x[7]++;
            }

        }
    }



    for(int i=0;i<8;i++){
        if(who_win_x[i] == 3){
            return true;
        }
    }
    return false;
}

bool check_o(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == 'o'){
                who_win_o[i%3]++;

                who_win_o[j%3+3]++;

                if(i==j) who_win_o[6]++;

                if(j == 2-i) who_win_o[7]++;
            }

        }
    }



    for(int i=0;i<8;i++){
        if(who_win_o[i] == 3){
            return true;
        }
    }
    return false;
}

void init(){

    for(int i=0;i<8;i++){
        who_win_o[i] = 0;
        who_win_x[i] = 0;
    }
}
