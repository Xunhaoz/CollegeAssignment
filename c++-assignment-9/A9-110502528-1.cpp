/*
Assignment 9
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/
#include<iostream>
using namespace std;
int main(){
    int a_x_size, a_y_size, b_x_size, b_y_size;
    cout << "Matrix A size = ";
    cin >> a_x_size >> a_y_size;
    cout << "Matrix B size = ";
    cin >> b_x_size >> b_y_size;

    if(a_y_size == b_x_size){
        int matrix_A[a_x_size][a_y_size];
        int matrix_B[b_x_size][b_y_size];
        int matrix_final[a_x_size][b_y_size];

        for(int i=0;i<a_x_size;i++){
            for(int j=0;j<b_y_size;j++){
                matrix_final[i][j]  = 0;
            }
        }

        cout << "Matrix A" << endl;
        for(int i=0;i<a_x_size;i++){
            for(int j=0;j<a_y_size;j++){
                cin >> matrix_A[i][j];
            }
        }
        cout << "Matrix B" << endl;
        for(int i=0;i<b_x_size;i++){
            for(int j=0;j<b_y_size;j++){
                cin >> matrix_B[i][j];
            }
        }

        for(int i=0;i<a_x_size;i++){
            for(int j=0;j<b_y_size;j++){
                for(int l=0;l<a_y_size;l++){
                    matrix_final[i][j] += matrix_A[i][l] * matrix_B[l][j];
                    //cout << "matrix_final[" << i << "]["<<j<<"] += " << "matrix_A[" << i << "][" << l << "] * matrix_B["<< l << "][" << j << "] == " << matrix_final[i][j] << endl;
                }
            }
        }

        cout << "Multiplication" <<endl;

        for(int i=0;i<a_x_size;i++){
            for(int j=0;j<b_y_size;j++){
                cout << matrix_final[i][j] << ' ';
            }
            cout<<endl;
        }

    }
    else{
        cout << "Can't be multiplied";
    }
}
