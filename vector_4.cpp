#include <iostream>
#include <vector>
using namespace std;

void reverseVec(vector<int> &arr)
{
    int a, b;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if ((n - (i + 1)) - i >= 0)
        {
            a = arr[i];
            b = arr[n - (i + 1)];

            a = a * b;
            b = a / b;
            a = a / b;

            arr[i] = a;
            arr[n - (i + 1)] = b;
        }
        else
        {
            break;
        }
    }

    cout << "Reversed Vector:\n";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "How many values do you want to store in vector: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Ok! Start entering values (Integers):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Actual Vector: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    reverseVec(arr);

    return 0;
}
