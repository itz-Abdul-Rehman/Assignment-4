#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> A = {4, 1, 5, 9, 7};
    vector<int> B = {1, 9, 4, 5};

    int sumA = 0, sumB = 0;

    for (int i = 0; i < A.size(); i++)
        sumA += A[i];

    for (int i = 0; i < B.size(); i++)
        sumB += B[i];

    cout << "Missing element is: " << (sumA - sumB) << endl;

    return 0;
}
