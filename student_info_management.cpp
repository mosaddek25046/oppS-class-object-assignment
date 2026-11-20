#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int studentID;
    string name;
    string department;
    int semester;
public:
    void setInformation(int id, string n, string dept, int sem) {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }
    void displayInformation() const {
        cout << "ID: " << studentID
             << " | Name: " << name
             << " | Department: " << department
             << " | Semester: " << semester << endl;
    }
};
int main() {
    Student s1, s2, s3;
    s1.setInformation(210601, "Rahim", "ICT", 3);
    s2.setInformation(210602, "Karim", "CSE", 5);
    s3.setInformation(210603, "Salma", "EEE", 2);

    s1.displayInformation();
    s2.displayInformation();
    s3.displayInformation();
    return 0;
}