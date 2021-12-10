/*
Assignment 11
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<vector>
using namespace std;

int main(){
    int matrix_size;

    while(1){

        cout << "Input Size:";
        if(!(cin >> matrix_size && matrix_size != -1))
            break;

        int matrix[matrix_size][matrix_size];

        for(int i=0;i<matrix_size;i++){
            for(int j=0;j<matrix_size;j++){
                cin >> matrix[i][j];
            }
        }

        bool is_symmetric = true;
        for(int i=0;i<matrix_size;i++){
            for(int j=0;j<matrix_size;j++){
                if(matrix[i][j] != matrix[(matrix_size-1)-i][(matrix_size-1)-j])
                    is_symmetric = false;
            }
        }

        cout << (is_symmetric ? "Symmetric!" : "Non-Symmetric!") << endl;

    }
    return 0;
}
