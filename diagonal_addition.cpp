// Divneev Singh
// 24070123043
// EnTC A2

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (n): ";
    cin >> n;

    int A[100][100];
    cout << "Enter " << n * n << " elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    int diagSum = 0;
    for (int i = 0; i < n; i++) diagSum += A[i][i];

    cout << "\nSum of the main diagonal elements is: " << diagSum << "\n";
    return 0;
}

/* OUTPUT
Enter size of square matrix (n): 3
Enter 9 elements of the matrix:
1 2 3
7 8 9
4 5 6

Sum of the main diagonal elements is: 15
*/
