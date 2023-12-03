//function overloading
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    char result;

    // Constructor
    Student(string n, char r) : name(n), result(r) {}

    // Function overloading 
    void displayResult() {
        displayResult(name, result);
    }

    void displayResult(string name, char result) {
        cout << "Student: " << name << " - Result: ";
        if (result == 'P' || result == 'p') {
            cout << "Pass" << endl;
        } else if (result == 'F' || result == 'f') {
            cout << "Fail" << endl;
        } else {
            cout << "Invalid Input" << endl;
        }
    }
};

int main() {
    Student students[10];

    cout << "Enter the results for 10 students:" << endl;

    for (int i = 0; i < 10; i++) {
        string name;
        char result;

        cout << "Student " << i + 1 << " name: ";
        cin >> name;
        cout << "Result (P for Pass, F for Fail): ";
        cin >> result;

        students[i] = Student(name, result);
    }

    cout << "Result Summary:" << endl;
    cout << "-----------------" << endl;
    for (int i = 0; i < 10; i++) {
        students[i].displayResult();
    }

    return 0;
}
