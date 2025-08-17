// Divneev Singh
// 24070123043
// EnTC A2

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int A[100][100];
    cout << "Enter " << r * c << " elements for the matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "\nThe matrix you entered is:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << A[i][j] << " ";
        cout << "\n";
    }
    return 0;
}

/* OUTPUT

Enter number of rows: 3
Enter number of columns: 3
Enter 9 elements for the matrix:
1 2 3 4 5 6 7 8 9

The matrix you entered is:
1 2 3 
4 5 6 
7 8 9 
*/
