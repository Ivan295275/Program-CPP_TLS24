#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Student {
    private:
        int id;
        string name;
        vector<int> grades;
        map<id, name> id_to_name;
    public:
        Student(int student_id, const string& student_name)
        : id(student_id), name(student_name) {}

    int get_id() const {}
    string get_name() const {}

    void add_grade(int grade) {
    }

    double calculate_sum() const {
    }

    bool has_grades() const {
    }
};

class GradeManager {
private:
    vector<Student> students;
    map <int, int> id_to_index;

public:
    void add_student(int id, const string& name) {
        students 
    }

    void add_grade(int id, int grade) {
    }
    
    void show_sum(int id) {
    }

    void list_all_students() {
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string name;
    int Q, id, grade;
    cin >> Q;
    
    GradeManager manager;
    
    for (int i = 0; i < Q; i++) {
        string operation;
    cin >> operation;
    if (operation == "add") {
        cin >> id >> name;
        manager.add_student(id, name);
    } else if (operation == "grade") {
        cin >> id >> grade;
        manager.add_grade(id, grade);
    } else if (operation == "sum") {

    }


}
return 0;
}