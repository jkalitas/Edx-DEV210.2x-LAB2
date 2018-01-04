//
// Created by jsilva on 19-12-2017.
//

#include "Student.h"

Student::Student(const string &firstName, const string &lastName, int age, const string &address, const string &city,
                 unsigned int phoneNumber) : Person(firstName, lastName, age, address, city, phoneNumber) {}

Student::Student() : Person() {

}

void Student::sitInClass() {
    std::cout << "Sitting in main theater" << std::endl;
}
