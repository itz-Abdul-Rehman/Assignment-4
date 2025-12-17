#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {10, 20, 20, 10, 10, 10, 30, 30, 40, 40, 40, 50};
    int n; 
    cout << "Enter the number to count its occurrences in the vector: ";
    cin >> n;
    int count = 0;
    for(int v : vec){
        if(v == n){
            count++;
        }
    }   
    cout << "The number " << n << " occurs " << count << " times in the vector." << endl;
    return 0;
}