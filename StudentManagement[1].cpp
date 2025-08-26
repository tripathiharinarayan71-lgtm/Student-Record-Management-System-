#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string course;
};

vector<Student> students;
int studentCounter = 1;

void addStudent(string name, int age, string course) {
    Student s = {studentCounter++, name, age, course};
    students.push_back(s);
}

void listStudents() {
    for (auto &s : students) {
        cout << "ID: " << s.id << " | Name: " << s.name 
             << " | Age: " << s.age << " | Course: " << s.course << endl;
    }
}

int main() {
    addStudent("Alice", 20, "Computer Science");
    addStudent("Bob", 22, "Electronics");
    cout << "Student Management System - Students:" << endl;
    listStudents();
    return 0;
}
