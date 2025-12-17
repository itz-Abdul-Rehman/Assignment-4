#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;  
    for(int i = 0; i < n; ++i) {
        int element;
        cin>>element;
        vec.push_back(element);
    }
    cout << "Elements in the vector are: ";
    for(const auto& v : vec) {
        cout << v << " ";
    }
    return 0;
}