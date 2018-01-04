#include <iostream>
#include "Course.h"

/**
 * edX DEV210.2x LAB 2
 *
 * @return exit code.
 */
int main() {

    //Instantiate three Student objects called Student1, Student2, and Student3, provide values for the member variables.
    Student Student1("John","Doe",33,"White Lane Avenue","Los Angeles",123456789);
    Student Student2("Jane","Doe",25,"White Lane Avenue","Los Angeles",123456789);
    Student Student3("Justin","Doe",33,"White Lane Avenue","Los Angeles",123456789);

    //Instantiate a Course object called Intermediate C++.
    Course *course = new Course();
    course->set_courseName("Intermediate C++");

    //Add your three students to this Course object.
    std::array<Student,3> students= {Student1,Student2,Student3};
    students.at(0)= Student1;
    students.at(1)= Student2;
    students.at(2)= Student3;
    course->set_students(students);

    //Instantiate at least one Teacher object.
    Teacher Teacher1("Professor","Doe",33,"White Lane Avenue","Los Angeles",123456789);

    //Add that Teacher object to your Course object
    course->set_teacher(Teacher1);

    //Using cout statements where appropriate, follow these instructions:
    //Output the name of the course
    course->toString();
    wait();
    //Call the GradeStudent() method on the Teacher object
    Teacher1.GradeStudent();


    return 0;
}