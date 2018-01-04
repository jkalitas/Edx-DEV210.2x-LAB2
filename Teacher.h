//
// Created by jsilva on 19-12-2017.
//

#ifndef EDX_DEV210_2X_LAB2_TEACHER_H

#include "Person.h"
#define EDX_DEV210_2X_LAB2_TEACHER_H



class Teacher : public Person{
public:

    Teacher();

    Teacher(const string &firstName, const string &lastName, int age, const string &address, const string &city,
            unsigned int phoneNumber);

    void sitInClass();

    void GradeStudent();

};


#endif //EDX_DEV210_2X_LAB2_TEACHER_H
