#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Finding if duplicate exists in the vector"<<endl;
    vector<int> vec = {10, 20, 30, 40, 50};
    bool duplicateFound = false;
    for(int i = 0; i < vec.size(); ++i){
        for(int j = i + 1; j < vec.size(); ++j){
            if(vec[i] == vec[j]){
                duplicateFound = true;
                break;
            }
        }
        if(duplicateFound){
            break;
        }
    }
    if(duplicateFound){
        cout << "Duplicate exists in the vector." << endl;
    } else {
        cout << "No duplicates found in the vector." << endl;
    }
}