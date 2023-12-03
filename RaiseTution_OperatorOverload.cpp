//operator overloading
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    char result;

    // Constructor
    Student(string n, char r) : name(n), result(r) {}

    // Function to display result
    void displayResult() {
        cout << "Student: " << name << " - Result: ";
        if (result == 'P' || result == 'p') {
            cout << "Pass" << endl;
        } else if (result == 'F' || result == 'f') {
            cout << "Fail" << endl;
        } else {
            cout << "Invalid Input" << endl;
        }
    }

    // Overloading << operator for displaying student information
    friend ostream &operator<<(ostream &output, const Student &s) {
        output << "Student: " << s.name << " - Result: ";
        if (s.result == 'P' || s.result == 'p') {
            output << "Pass";
        } else if (s.result == 'F' || s.result == 'f') {
            output << "Fail";
        } else {
            output << "Invalid Input";
        }
        return output;
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
        cout << students[i] << endl;
    }

    return 0;
}
