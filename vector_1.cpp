#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {10, 20, 30, 40, 50};
    cout << "Traditional for loop output: ";
    for(size_t i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Range-based for loop output: ";
    for(int v: vec){
        cout << v << " ";
    }
    return 0;
}