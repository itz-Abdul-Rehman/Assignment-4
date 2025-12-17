#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout << "Enter 10 integers to add to the vector:" << endl;
    for(int i = 0; i < 10; ++i){
        int element;
        cin >> element;
        vec.push_back(element);
    }
    int greatest = vec[0];
    for(int v : vec){
        if(v > greatest){
            greatest = v;
        }
    }
    cout<<"Greatest element in the vector is: "<< greatest << endl;
    
    int smallest = vec[0];
    for(int v : vec){
        if(v < smallest){
            smallest = v;
        }
    }
    cout<<"Smallest element in the vector is: "<< smallest << endl;
    return 0;
}