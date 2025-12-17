#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 15, 20, 25, 30, 33, 40};
    cout << "Original Vector:\n";
    for (int x : v)
        cout << x << " ";
    cout << endl;
    for (int i = 0; i < v.size(); )
    {
        if (v[i] % 2 == 0)
            v.erase(v.begin() + i);   // remove even number
        else
            i++;  // move forward only if not erased
    }

    cout << "Vector after deleting even numbers:\n";
    for (int x : v)
        cout << x << " ";

    return 0;
}
