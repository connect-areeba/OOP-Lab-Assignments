#include <iostream>
using namespace std;
// Function to add two matrices
void addMatrix(int A[3][3], int B[3][3], int sum[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}
// Function to multiply two matrices
void multiplyMatrix(int A[3][3], int B[3][3], int mul[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
// Function to display a matrix
void displayMatrix(int M[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int A[3][3], B[3][3];
    int sum[3][3], mul[3][3]; 

    cout << "Enter elements of 1st matrix:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Enter elements of 2nd matrix:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> B[i][j];

    addMatrix(A, B, sum);
    multiplyMatrix(A, B, mul);

    cout << "\nMatrix A:\n";
    displayMatrix(A);

    cout << "\nMatrix B:\n";
    displayMatrix(B);

    cout << "\nAddition of matrices:\n";
    displayMatrix(sum);

    cout << "\nMultiplication of matrices:\n";
    displayMatrix(mul);

    return 0;
}
