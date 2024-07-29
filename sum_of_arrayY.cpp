#include <iostream>
#include <array>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "2D array representation:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Row sum
    // for (int i = 0; i < rows; i++) {
    //     int sum = 0;
    //     for (int j = 0; j < cols; j++) {
    //         sum += arr[i][j];
    //     }
    //     cout << "Sum of row " << i + 1 << ": " << sum << endl;
    // }

    //Diagonal and Row sum together
    int diagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
            if (i == j) {
                diagonalSum += arr[i][j];
            }
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
    }
    cout << "Sum of diagonal elements: " << diagonalSum << endl;
    return 0;
}