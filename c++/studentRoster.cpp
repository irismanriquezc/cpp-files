// Example program
#include <iostream>
#include <string>
using namespace std;

const int NUM_STUDENTS = 3; // Set to 3 for testing and then set to 10
struct student
{
    string name;
    double gpa;
    string id;
};

void initStudent(student &s);
void initStudents(student students[], int sz);
void displayStudent(student s);
void displayRoster(const student students[], int sz);
student searchRoster(string name, student students[], int sz);
char displayMenu();

int main()
{
    student students[NUM_STUDENTS];
    char choice = 'q';
    student result;
    string name;
    
    initStudents(students, NUM_STUDENTS);
    do{
        choice = displayMenu();
        cin.ignore();
        if(tolower(choice) == 'd')
            displayRoster(students, NUM_STUDENTS);
        else if(tolower(choice) == 's')
        {
            cout << "Enter student name for search\n";
            getline(cin, name);
            result = searchRoster(name, students, NUM_STUDENTS);
            displayStudent(result);
        }
        else if (tolower(choice) == 'q')
            cout << "Goodbye.\n";
        else
            cout << "Not a valid choice. Please try again.\n";
    }while(tolower(choice) != 'q');
    return 0;
}
void initStudent(student &s)
{
    cout << "Enter student name:\n";
    getline(cin, s.name);
    cout << "Enter GPA\n";
    cin >> s.gpa;
    cout << "Enter id\n";
    cin >> s.id;
    cin.ignore();// mixing getlines and cin's
}
void initStudents(student students[], int sz)
{
    for(int i = 0; i < sz; i++)
        initStudent(students[i]);
}
void displayStudent(student s)
{
    cout << "Name: " << s.name << " (ID#: " << s.id << " ) GPA: " << s.gpa << endl;
}
void displayRoster(const student students[], int sz)
{
    for(int i = 0; i < sz; i++)
        displayStudent(students[i]);
}
student searchRoster(string name, student students[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        if(name == students[i].name)
            return students[i];
    }
    return student();
}
char displayMenu()
{
    char choice = 'q';
    cout << "Enter d: display roster\n"
    << "Enter s: search for student by name\n"
    << "Enter q: quit\n";
    cin >> choice;
    return choice;
}
