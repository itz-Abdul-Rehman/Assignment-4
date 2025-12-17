#include<iostream>
#include<vector>
using namespace std;
int main() {
    cout<<"Enter the number to create nxn matrix:"<<endl;
    int n;      
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix row-wise:" << endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << "The entered matrix is:" << endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}