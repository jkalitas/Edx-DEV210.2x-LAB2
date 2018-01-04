//
// Created by jsilva on 19-12-2017.
//

#include "Teacher.h"

Teacher::Teacher(const string &firstName, const string &lastName, int age, const string &address, const string &city,
                 unsigned int phoneNumber) : Person(firstName, lastName, age, address, city, phoneNumber) {}

Teacher::Teacher() : Person(){

}


void Teacher::GradeStudent(){
    std::cout << "[STUDENTS GRADED] "  <<std::endl;
}

void Teacher::sitInClass() {
    std::cout << "Sitting at front of class" << std::endl;
}
