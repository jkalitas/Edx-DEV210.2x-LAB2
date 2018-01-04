//
// Created by jsilva on 19-12-2017.
//

#ifndef EDX_DEV210_2X_LAB2_COURSE_H
#define EDX_DEV210_2X_LAB2_COURSE_H


#include "Teacher.h"
#include "Student.h"
#include <array>

class Course {
public:
    Course();

    Course(const Teacher &_teacher, const array<Student, 3> &_students, const string &_courseName);

    virtual ~Course();

    const Teacher &get_teacher() const;

    void set_teacher(const Teacher &_teacher);

    const array<Student, 3> &get_students() const;

    void set_students(const array<Student, 3> &_students);

    const string &get_courseName() const;

    void set_courseName(const string &_courseName);

    void toString();

private:

    Teacher _teacher{};
    std::array <Student,3> _students;
    std::string _courseName{};
};


#endif //EDX_DEV210_2X_LAB2_COURSE_H
