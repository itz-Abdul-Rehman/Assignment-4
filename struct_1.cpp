#include<iostream>
#include<vector>
using namespace std;
struct student {
    string name;
    string id;
    char Section;
    int batch;
    bool isEnrolled;
};
student input() {
    
        student s;
        cout << "Name: ";
        cin >> s.name;
        cout << "ID: ";
        cin >> s.id;
        cout << "Section: ";
        cin >> s.Section;
        cout << "Batch: ";
        cin >> s.batch;
        cout << "Is Enrolled (1 for yes, 0 for no): ";
        cin >> s.isEnrolled;
        return s;
        
}
void output(student s) {
   
        cout << "Name: " << s.name << "\n";
        cout << "ID: " << s.id << "\n";
        cout << "Section: " << s.Section << "\n";
        cout << "Batch: " << s.batch << "\n";
        cout << "Is Enrolled: " << (s.isEnrolled ? "Yes" : "No") << "\n";
        cout << "-----------------------\n";
    
}
int main(){
    vector <student> students;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for student " << i + 1 << ":\n";
        students.push_back(input());
    }
    for(student s:students){
        output(s);
    }
    return 0;
}