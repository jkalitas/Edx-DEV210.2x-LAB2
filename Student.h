//
// Created by jsilva on 19-12-2017.
//

#ifndef EDX_DEV210_2X_LAB2_STUDENT_H

#include "Person.h"

#define EDX_DEV210_2X_LAB2_STUDENT_H




class Student : public Person{
public:

    Student();

    Student(const string &firstName, const string &lastName, int age, const string &address, const string &city,
            unsigned int phoneNumber);

    void sitInClass();

private:

};


#endif //EDX_DEV210_2X_LAB2_STUDENT_H
