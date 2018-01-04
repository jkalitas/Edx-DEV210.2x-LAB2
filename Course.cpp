//
// Created by jsilva on 19-12-2017.
//

#include "Course.h"

Course::Course() {}

Course::Course(const Teacher &_teacher, const array<Student, 3> &_students, const string &_courseName) : _teacher(
        _teacher), _students(_students), _courseName(_courseName) {}

const Teacher &Course::get_teacher() const {
    return _teacher;
}

void Course::set_teacher(const Teacher &_teacher) {
    Course::_teacher = _teacher;
}

const array<Student, 3> &Course::get_students() const {
    return _students;
}

void Course::set_students(const array<Student, 3> &_students) {
    Course::_students = _students;
}

const string &Course::get_courseName() const {
    return _courseName;
}

void Course::set_courseName(const string &_courseName) {
    Course::_courseName = _courseName;
}

Course::~Course() {

}

void Course::toString(){
    std::cout << "\n[COURSE NAME]\n" << std::endl;
    std::cout << _courseName << std::endl;

    std::cout << "\n[STUDENTS]\n" << std::endl;
    for(Student s : _students){
        std::cout << s.getFirstName() << std::endl;
    }
    std::cout << "\n[TEACHER]\n"<< std::endl;
    std::cout << _teacher.getFirstName() << std::endl;

}