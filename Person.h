//
// Created by jsilva on 19-12-2017.
//

#ifndef EDX_DEV210_2X_LAB2_PERSON_H

#include <iostream>

#define EDX_DEV210_2X_LAB2_PERSON_H

using namespace std;

class Person {
private:
    string _firstName
    string _lastName;
    int _age;
    string _address;
    string _city;
    unsigned int _phoneNumber;
public:
    Person();

    Person(const string &firstName, const string &lastName, int age, const string &address, const string &city,
           unsigned int phoneNumber);

    ~Person();

    virtual void sitInClass();

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

    int getAge() const;

    void setAge(int age);

    const string &getAddress() const;

    void setAddress(const string &address);

    const string &getCity() const;

    void setCity(const string &city);

    unsigned int getPhoneNumber() const;

    void setPhoneNumber(unsigned int phoneNumber);

};


#endif //EDX_DEV210_2X_LAB2_PERSON_H
