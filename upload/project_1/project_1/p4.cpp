#include <iostream>
#include <vector>

using namespace std;
const int MAX_ROWS = 100;
const int MAX_COLS = 100;

// 행과 열의 합을 계산하는 함수
void calculateRowAndColumnSum(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int rowSum[MAX_ROWS] = { 0 }; // 각 행의 합을 저장할 배열
    int colSum[MAX_COLS] = { 0 }; // 각 열의 합을 저장할 배열

    // 행의 합 계산
    /*for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowSum[i] += matrix[i][j];
        }
    }*/

    // 열의 합 계산
    /*for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            colSum[j] += matrix[i][j];
        }
    }*/

    /*for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            colSum[j] += matrix[i][j];
        }
    }*/

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
   
    cout << "각 행의 합:\n";
    for (int i = 0; i < rows; ++i) {
        cout << "행 " << i + 1 << ": " << rowSum[i] << "\n";
    }

    cout << "각 열의 합:\n";
    for (int j = 0; j < cols; ++j) {
        cout << "열 " << j + 1 << ": " << colSum[j] << "\n";
    }
}






int main() {
    int n;

    // 사용자로부터 홀수 n을 입력 받음

    while (true) {
        cout << "Odd number: ";
        cin >> n;
        if (n % 2 == 0) {
            cout << "Should be a odd number." << endl;
            continue;

        }
        else {
            break;
        }

        int matrix[MAX_ROWS][MAX_COLS];
        int rows, cols;
        

        rows = n;
        cols = n;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
               matrix[i][j];
            }
        }
        matrix[n][(n+1)/2] = 1;

        calculateRowAndColumnSum(matrix, rows, cols);


        return 0;


    }
}
//vector<vector<int>> magicSquare(n, vector<int>(n, 0)) n*n행렬 


