#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the number to find what number of pairs in the vector have sum equal to it:"<<endl;
    int targetSum;
    cin >> targetSum;
    vector<int> vec = {1, 2, 3, 4, 4, 3, 3, 5, 6, 6, 6, 7, 7, 8, 9, 10};
    int pairCount = 0;
    for(int i = 0; i < vec.size(); ++i){
        for(int j = i + 1; j < vec.size(); ++j){
            if(vec[i] + vec[j] == targetSum){
                pairCount++;
            }
        }
    }
    cout << "Number of pairs with sum " << targetSum << " is: " << pairCount << endl;
    return 0;
}