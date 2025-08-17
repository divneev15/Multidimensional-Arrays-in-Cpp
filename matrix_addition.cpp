/*Divneev Singh
24070123043
ENTC A2
*/

#include <iostream>
using namespace std;

int main() 
{
    int row1, column1, row2, column2;

    cout << "Enter the number of rows for Array 1: " << endl;
    cin >> row1;
    cout << "Enter the number of columns for Array 1: " << endl;
    cin >> column1;

    cout << "Enter the number of rows for Array 2: " << endl;
    cin >> row2;
    cout << "Enter the number of columns for Array 2: " << endl;
    cin >> column2;

  
    if (row1 != row2 || column1 != column2) {
        cout << "Invalid! Matrices must have the same dimensions for addition." << endl;
        return 0; 
    }

    int arr1[row1][column1], arr2[row2][column2], arr3[row1][column1];

    cout << "Array 1: " << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Array 2: " << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            cin >> arr2[i][j];
        }
    }

    
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Array 1: " << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Array 2: " << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Addition: " << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }
}

/*
output 
Enter the number of rows for Array 1: 
2
Enter the number of columns for Array 1: 
3
Enter the number of rows for Array 2: 
3
Enter the number of columns for Array 2: 
3
Invalid! Matrices must have the same dimensions for addition.

or 

Enter the number of rows for Array 1: 
2
Enter the number of columns for Array 1: 
2
Enter the number of rows for Array 2: 
2
Enter the number of columns for Array 2: 
2
Array 1: 
1
2
3
4
Array 2: 
5
6
7
8

Array 1: 
1    2    
3    4    

Array 2: 
5    6    
7    8    

Addition: 
6    8    
10   12 

*/
