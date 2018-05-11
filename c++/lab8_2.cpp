/*lab8_2
Basically lab8_1 but this time a vector of the class Course is used in the main.
Eros Gonzalez
3/24/16
*/
#include "Course.h"
#include <vector>

int main()
{
    ifstream in_file;
    string file_name;

    string temp_d, temp_n;
    int temp_s, temp_se, runs;

    vector<Course> course;

    cout << "File: ";
    cin >> file_name;

    in_file.open(file_name.c_str());
    if (in_file.fail())
    {
        cout << "Error opening file.";
        exit(1);
    }
    in_file >> runs;//takes the number of courses at the beginning of the file

    for (int i=0; runs > i; i++)
    {
        in_file >> temp_d >> temp_n >> temp_s >> temp_se;

        course.push_back(Course(temp_d, temp_n, temp_s, temp_se));//set the courses from the file into the vector
    }
    cout << "Here are the college courses:";

    for(Course& y:course)
    {
        y.print();//calls print
    }


}
