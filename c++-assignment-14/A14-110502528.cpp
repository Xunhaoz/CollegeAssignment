/*
Assignment 14
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/

#include<iostream>
using namespace std;

int findMinN(string);
int NtoDec(string, int);

int main(){
    while(1){
        string R;
        cin >> R;

        if(R == "-1") break;

        int minN = findMinN(R);

        if(minN < 1){
            cout << "such number is impossible!" << endl;
            continue;
        }

        bool is_find = false;
        while(minN<63){
            int tmp = NtoDec(R, minN+1);
            if(tmp % minN == 0){
                cout << minN+1 << endl;
                is_find = true;
                break;
            }
            minN++;
        }
        if(!is_find) cout << "such number is impossible!" << endl;

    }
    return 0;
}

int findMinN(string R){
    int N = 0;
    for(int i=0;i<R.length();i++){

        if(islower(R[i])){
            if((int)R[i] - 61 > N) N = (int)R[i] - 61;
        }

        else if(isupper(R[i])){
            if((int)R[i] - 55 > N) N = (int)R[i] - 55;
        }

        else{
            if((int)R[i] - 48 > N) N = (int)R[i] - 48;
        }
    }
    return N;
}

int NtoDec(string R, int N){
    int j = 1, sum = 0;
    for(int i=R.length()-1;i>=0;--i){

        if(islower(R[i])){
            sum += ((int)R[i] - 61) * j;
        }

        else if(isupper(R[i])){
            sum += ((int)R[i] - 55) * j;
        }

        else{
            sum += ((int)R[i] - 48) * j;
        }
        j = j * N;
    }
    return sum;
}
